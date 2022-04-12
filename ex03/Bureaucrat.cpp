/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:43:09 by msousa            #+#    #+#             */
/*   Updated: 2022/04/12 23:58:07 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Exceptions */
const char*	Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return "grade is too high";
}

const char*	Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return "grade is too low";
}

/* Constructors */
Bureaucrat::Bureaucrat( void ) { /* no-op */ }

Bureaucrat::Bureaucrat( std::string const & name, uint grade ) : name(name)
{
	if (grade > GRADE_MIN)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < GRADE_MAX)
		throw Bureaucrat::GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : name(src.name)
{
	*this = src;
}

/* Destructor */
Bureaucrat::~Bureaucrat( void ) { /* no-op */ }

/* Assignment operator */
Bureaucrat &	Bureaucrat::operator = ( Bureaucrat const & rhs )
{
	if (this != &rhs) {
		grade = rhs.grade;
	}
	return *this;
}

uint	Bureaucrat::getGrade( void ) const { return grade; }
std::string	Bureaucrat::getName( void ) const { return name; }

void	Bureaucrat::incGrade( void )
{
	if (grade == GRADE_MAX) {
		throw Bureaucrat::GradeTooHighException();
	}
	grade--;
}

void	Bureaucrat::decGrade( void )
{
	if (grade == GRADE_MIN) {
		throw Bureaucrat::GradeTooLowException();
	}
	grade++;
}

void	Bureaucrat::signForm(Form & form) const
{
	if (form.getSigned())
		return ;

	try {
		form.beSigned(*this);
		LOG(getName() << " signed " << form.getName());
	}
	catch (Form::GradeTooLowException & e) {
		LOG(getName() << " couldn’t sign " <<
			form.getName() << " because " <<
			e.what() << ".");
	}
}

void	Bureaucrat::executeForm(Form const & form) const
{
	try {
		// has to be in this order so cathed exception doesnt happen after
		// printing success on the console
		form.execute(*this);
		LOG(getName() << " executed " << form.getName());
	}
	catch (Form::GradeTooLowException & e) {
		LOG(getName() << " couldn’t execute " <<
			form.getName() << " because " <<
			e.what() << ".");
	}
}

/* ostream override */
std::ostream &	operator << ( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return o;
}

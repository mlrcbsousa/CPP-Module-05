/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:43:09 by msousa            #+#    #+#             */
/*   Updated: 2022/04/11 18:04:38 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Exceptions */
const char*	Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return "Grade is too high, max 1";
}

const char*	Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return "Grade is too low, min 150";
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

/* ostream override */
std::ostream &	operator << ( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return o;
}

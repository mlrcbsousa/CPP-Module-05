/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:54:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/12 22:27:09 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Exceptions */
const char*	Form::GradeTooHighException::what( void ) const throw()
{
	return "grade is too high";
}

const char*	Form::GradeTooLowException::what( void ) const throw()
{
	return "grade is too low";
}

const char*	Form::FormDoesntExist::what( void ) const throw()
{
	return "form doesn't exist";
}

/* Constructors */
Form::Form( void ) : gradeSign(GRADE_MIN), gradeExecute(GRADE_MIN) { /* no-op */ }

Form::Form( std::string const & name,
			uint const & gradeSign,
			uint const & gradeExecute,
			std::string const & target ) :
			name(name),
			isSigned(false),
			gradeSign(gradeSign),
			gradeExecute(gradeExecute),
			target(target)
{
	if (gradeSign > GRADE_MIN || gradeExecute > GRADE_MIN)
		throw Form::GradeTooLowException();
	if (gradeSign < GRADE_MAX || gradeExecute < GRADE_MAX)
		throw Form::GradeTooHighException();
}

Form::Form( Form const & src ) :
			name(src.name),
			gradeSign(src.gradeSign),
			gradeExecute(src.gradeExecute),
			target(src.target)
{
	*this = src;
}

/* Destructor */
Form::~Form( void ) { /* no-op */ }

/* Assignment operator */
Form &	Form::operator = ( Form const & rhs )
{
	if (this != &rhs) {
		isSigned = rhs.isSigned;
	}
	return *this;
}

/* Getters */
std::string	Form::getName( void ) const { return name; }
bool	Form::getSigned( void ) const { return isSigned; }
uint	Form::getGradeSign( void ) const { return gradeSign; }
uint	Form::getGradeExecute( void ) const { return gradeExecute; }
std::string	Form::getTarget( void ) const { return target; }

void	Form::beSigned(Bureaucrat bureaucrat) {
	if (bureaucrat.getGrade() > gradeSign) {
		throw Form::GradeTooLowException();
		return ;
	}

	isSigned = true;
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > gradeExecute) {
		throw Form::GradeTooLowException();
		return ;
	}

	action();
}

/* ostream override */
std::ostream &	operator << ( std::ostream & o, Form const & i )
{
	o << "Form " << i.getName() << ", is ";
	o << (i.getSigned() ? "" : "not ") << "signed. ";
	o << "Grade " << i.getGradeSign() << " to sign. ";
	o << "Grade " << i.getGradeExecute() << " to execute.";
	o << "Target: " << i.getTarget();
	return o;
}

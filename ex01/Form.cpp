/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:54:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/11 20:26:33 by msousa           ###   ########.fr       */
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

/* Constructors */
Form::Form( void ) : gradeSign(GRADE_MIN), gradeExecute(GRADE_MIN) { /* no-op */ }

Form::Form( std::string const & name,
			uint const & gradeSign,
			uint const & gradeExecute ) :
			name(name),
			isSigned(false),
			gradeSign(gradeSign),
			gradeExecute(gradeExecute)
{
	if (gradeSign > GRADE_MIN || gradeExecute > GRADE_MIN)
		throw Form::GradeTooLowException();
	if (gradeSign < GRADE_MAX || gradeExecute < GRADE_MAX)
		throw Form::GradeTooHighException();
}

Form::Form( Form const & src ) :
			name(src.name),
			gradeSign(src.gradeSign),
			gradeExecute(src.gradeExecute)
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

void	Form::beSigned(Bureaucrat bureaucrat) {
	if (bureaucrat.getGrade() > gradeSign)
		throw Form::GradeTooLowException();
	else
		isSigned = true;
}

/* ostream override */
std::ostream &	operator << ( std::ostream & o, Form const & i )
{
	o << "Form " << i.getName() << ", is ";
	o << (i.getSigned() ? "" : "not ") << "signed. ";
	o << "Grade " << i.getGradeSign() << " to sign. ";
	o << "Grade " << i.getGradeExecute() << " to execute.";
	return o;
}

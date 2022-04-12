/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:20:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/12 21:03:16 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	ShrubberyCreationForm 	shrubbery("Garden");
	Bureaucrat 				bob("bob", 138);

	// test bureaucrat grade too low to execute
	try { bob.executeForm(shrubbery); }
	catch (Form::GradeTooLowException & e) { ERROR(e.what()); }

	// test bureaucrat execute form
	bob.incGrade();
	bob.executeForm(shrubbery);

	RobotomyRequestForm 	robotomy("Calvin");
	bob = Bureaucrat("bob", 46);

	try { bob.executeForm(robotomy); }
	catch (Form::GradeTooLowException & e) { ERROR(e.what()); }
	bob.incGrade();
	bob.executeForm(robotomy);

	PresidentialPardonForm 	presidential("Julian");
	bob = Bureaucrat("bob", 6);

	try { bob.executeForm(presidential); }
	catch (Form::GradeTooLowException & e) { ERROR(e.what()); }
	bob.incGrade();
	bob.executeForm(presidential);

	return 0;
}

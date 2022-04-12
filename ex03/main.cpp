/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:20:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/12 23:52:04 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main( void )
{
	Intern  intern;
    Form*   form;

	// test form doesn't exist
	try { form = intern.makeForm("supply chain", "Pipe"); }
	catch (Form::FormDoesntExist & e) { ERROR(e.what()); }

	Bureaucrat	bob("bob", 138);
	form = intern.makeForm("shrubbery creation", "Garden");

	try { bob.executeForm(*form); }
	catch (Form::GradeTooLowException & e) { ERROR(e.what()); delete form; }
	bob.incGrade();
	bob.executeForm(*form);

	delete form;
	form = intern.makeForm("robotomy request", "Calvin");
	bob = Bureaucrat("bob", 46);

	try { bob.executeForm(*form); }
	catch (Form::GradeTooLowException & e) { ERROR(e.what()); delete form; }
	bob.incGrade();
	bob.executeForm(*form);

	delete form;
	form = intern.makeForm("presidential pardon", "Julian");
	bob = Bureaucrat("bob", 6);

	try { bob.executeForm(*form); }
	catch (Form::GradeTooLowException & e) { ERROR(e.what()); delete form; }
	bob.incGrade();
	bob.executeForm(*form);

	delete form;

	return 0;
}

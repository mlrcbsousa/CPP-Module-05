/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:20:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/12 20:40:33 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	// Bureaucrat bob = Bureaucrat("bob", 1);
	Form f28c = Form("28C", 5, 17);

	LOG(f28c);

	// test bad construction
	try { f28c = Form("28C", 0, 1); }
	catch (Form::GradeTooHighException & e) { ERROR(e.what()); }

	try { f28c = Form("28C", 151, 1); }
	catch (Form::GradeTooLowException & e) { ERROR(e.what()); }

	try { f28c = Form("28C", 1, 0); }
	catch (Form::GradeTooHighException & e) { ERROR(e.what()); }

	try { f28c = Form("28C", 1, 151); }
	catch (Form::GradeTooLowException & e) { ERROR(e.what()); }

	// test bureaucrat grade too low to sign
	Bureaucrat bob = Bureaucrat("bob", 6);

	bob.signForm(f28c);

	// test bureaucrat sign form
	bob.incGrade();
	bob.signForm(f28c);

	return 0;
}

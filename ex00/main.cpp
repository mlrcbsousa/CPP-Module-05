/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:20:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/10 21:09:53 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat bob = Bureaucrat("bob", 1);

	LOG(bob);

	// test bad construction
	// try {
	// 	bob = Bureaucrat("bob", 0);
	// }
	// catch (std::exception & e) {
	// 	/* handle exception */
	// }

	// try {
	// 	bob = Bureaucrat("bob", 151);
	// }
	// catch (std::exception & e) {
	// 	/* handle exception */
	// }

	// test out of bounds increment
	// try {
	// 	bob.incGrade();
	// }
	// catch (Bureaucrat::GradeTooHighException& e) {
	// 	ERROR(e.what());
	// }

	bob = Bureaucrat("bob", 150);
	// test out of bounds decrement
	try {
		bob.decGrade();
	}
	catch (std::exception & e) {
		ERROR(e.what());
	}

	return 0;
}

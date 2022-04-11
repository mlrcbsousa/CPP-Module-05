/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:56:16 by msousa            #+#    #+#             */
/*   Updated: 2022/04/11 20:56:22 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* Constructors */
RobotomyRequestForm::RobotomyRequestForm( void ) { /* no-op */ }
RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) { *this = src; }

/* Destructor */
RobotomyRequestForm::~RobotomyRequestForm( void ) { /* no-op */ }

/* Assignment operator */
RobotomyRequestForm &	RobotomyRequestForm::operator = ( RobotomyRequestForm const & rhs )
{
	if (this != &rhs) {
		//value = rhs.value;
	}
	return *this;
}

/* ostream override */
std::ostream &	operator << ( std::ostream & o, RobotomyRequestForm const & i )
{
	(void)i;
	o << "RobotomyRequestForm";
	return o;
}

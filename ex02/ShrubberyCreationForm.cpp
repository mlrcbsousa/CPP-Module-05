/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:56:56 by msousa            #+#    #+#             */
/*   Updated: 2022/04/11 20:57:02 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* Constructors */
ShrubberyCreationForm::ShrubberyCreationForm( void ) { /* no-op */ }
ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) { *this = src; }

/* Destructor */
ShrubberyCreationForm::~ShrubberyCreationForm( void ) { /* no-op */ }

/* Assignment operator */
ShrubberyCreationForm &	ShrubberyCreationForm::operator = ( ShrubberyCreationForm const & rhs )
{
	if (this != &rhs) {
		//value = rhs.value;
	}
	return *this;
}

/* ostream override */
std::ostream &	operator << ( std::ostream & o, ShrubberyCreationForm const & i )
{
	(void)i;
	o << "ShrubberyCreationForm";
	return o;
}

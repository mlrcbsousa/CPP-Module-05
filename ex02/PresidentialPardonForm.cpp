/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:55:27 by msousa            #+#    #+#             */
/*   Updated: 2022/04/11 20:55:36 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* Constructors */
PresidentialPardonForm::PresidentialPardonForm( void ) { /* no-op */ }
PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) { *this = src; }

/* Destructor */
PresidentialPardonForm::~PresidentialPardonForm( void ) { /* no-op */ }

/* Assignment operator */
PresidentialPardonForm &	PresidentialPardonForm::operator = ( PresidentialPardonForm const & rhs )
{
	if (this != &rhs) {
		//value = rhs.value;
	}
	return *this;
}

/* ostream override */
std::ostream &	operator << ( std::ostream & o, PresidentialPardonForm const & i )
{
	(void)i;
	o << "PresidentialPardonForm";
	return o;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:55:27 by msousa            #+#    #+#             */
/*   Updated: 2022/04/12 23:28:33 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* Constructors */
PresidentialPardonForm::PresidentialPardonForm( std::string const & target ) :
	Form("PresidentialPardon", 25, 5, target)
{ /* no-op */ }

PresidentialPardonForm::PresidentialPardonForm(
	PresidentialPardonForm const & src ) :
	Form(src)
{ *this = src; }

/* Destructor */
PresidentialPardonForm::~PresidentialPardonForm( void ) { /* no-op */ }

/* Assignment operator */
PresidentialPardonForm &	PresidentialPardonForm::operator = (
	PresidentialPardonForm const & rhs )
{
	(void)rhs;
	return *this;
}

void	PresidentialPardonForm::action( void ) const
{
	LOG(getTarget() << " has been pardoned by Zaphod Beeblebrox.");
}

Form*	PresidentialPardonForm::create( std::string const & target )
{
	return new PresidentialPardonForm(target);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:56:16 by msousa            #+#    #+#             */
/*   Updated: 2022/04/12 21:01:21 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* Constructors */
RobotomyRequestForm::RobotomyRequestForm( std::string const & target ) :
	Form("RobotomyRequest", 72, 45, target)
{
	// set seed for random number generator
	std::srand((unsigned int)time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(
	RobotomyRequestForm const & src ) :
	Form(src)
{ *this = src; }

/* Destructor */
RobotomyRequestForm::~RobotomyRequestForm( void ) { /* no-op */ }

/* Assignment operator */
RobotomyRequestForm &	RobotomyRequestForm::operator = (
	RobotomyRequestForm const & rhs )
{
	(void)rhs;
	return *this;
}

void	RobotomyRequestForm::action( void ) const
{
	LOG("* some drilling noises *");
	if (rand() % 2 != 0)
		LOG(getTarget() << " has been robotomized successfully.");
	else
		LOG("Robotomization failed on " << getTarget());
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:19:57 by msousa            #+#    #+#             */
/*   Updated: 2022/04/13 00:05:17 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/* Constructors */
Intern::Intern( void ) { /* no-op */ }
Intern::Intern( Intern const & src ) { *this = src; }

/* Destructor */
Intern::~Intern( void ) { /* no-op */ }

/* Assignment operator */
Intern &	Intern::operator = ( Intern const & rhs )
{
	if (this != &rhs) {
		//value = rhs.value;
	}
	return *this;
}

Form*	Intern::makeForm( std::string name, std::string target )
{
	static s_form definitions[3] = {
		{ "robotomy request", 		&RobotomyRequestForm::create },
		{ "presidential pardon", 	&PresidentialPardonForm::create },
		{ "shrubbery creation", 	&ShrubberyCreationForm::create },
	};
	t_form form = NULL;

	for (size_t i = 0; i < 3; i++) {
		if (definitions[i].name == name) {
			form = definitions[i].form;
			break ;
		}
	}

	if (!form) {
		throw Form::FormDoesntExist();
	}

	LOG("Intern creates " << name << " form.");
	return form(target);
}

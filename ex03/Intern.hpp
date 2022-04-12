/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:19:49 by msousa            #+#    #+#             */
/*   Updated: 2022/04/12 23:42:57 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_H__
# define __INTERN_H__

# include <iostream>

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

// ************************************************************************** //
//                               Intern Class                                 //
// ************************************************************************** //

class Intern {

public:

	Intern( void );
	Intern( Intern const & src );
	~Intern( void );
	Intern &	operator = ( Intern const & rhs );

	Form*	makeForm( std::string name, std::string target );

};

#endif /* __INTERN_H__ */

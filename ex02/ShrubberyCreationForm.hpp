/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:57:06 by msousa            #+#    #+#             */
/*   Updated: 2022/04/11 20:57:36 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERY_CREATION_FORM_H__
# define __SHRUBBERY_CREATION_FORM_H__

# include <iostream>

// ************************************************************************** //
//                        ShrubberyCreationForm Class                         //
// ************************************************************************** //

class ShrubberyCreationForm {

public:

	ShrubberyCreationForm( void );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm &	operator = ( ShrubberyCreationForm const & rhs );

private:



};

std::ostream &	operator << ( std::ostream & o, ShrubberyCreationForm const & i );

#endif /* __SHRUBBERY_CREATION_FORM_H__ */

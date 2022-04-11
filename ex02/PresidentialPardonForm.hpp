/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:55:42 by msousa            #+#    #+#             */
/*   Updated: 2022/04/11 20:56:10 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIAL_PARDON_FORM_H__
# define __PRESIDENTIAL_PARDON_FORM_H__

# include <iostream>

// ************************************************************************** //
//                       PresidentialPardonForm Class                         //
// ************************************************************************** //

class PresidentialPardonForm {

public:

	PresidentialPardonForm( void );
	PresidentialPardonForm( PresidentialPardonForm const & src );
	~PresidentialPardonForm( void );
	PresidentialPardonForm &	operator = ( PresidentialPardonForm const & rhs );

private:



};

std::ostream &	operator << ( std::ostream & o, PresidentialPardonForm const & i );

#endif /* __PRESIDENTIAL_PARDON_FORM_H__ */

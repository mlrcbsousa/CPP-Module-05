/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:55:42 by msousa            #+#    #+#             */
/*   Updated: 2022/04/12 20:38:11 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIAL_PARDON_FORM_H__
# define __PRESIDENTIAL_PARDON_FORM_H__

# include "Form.hpp"

// ************************************************************************** //
//                       PresidentialPardonForm Class                         //
// ************************************************************************** //

class PresidentialPardonForm : public Form {

private:

	typedef PresidentialPardonForm t;

	PresidentialPardonForm( void );

public:

	PresidentialPardonForm( std::string const & target );
	PresidentialPardonForm( t const & src );
	virtual ~PresidentialPardonForm( void );
	virtual PresidentialPardonForm &	operator = ( t const & rhs );

	virtual void	action( void ) const;

};

#endif /* __PRESIDENTIAL_PARDON_FORM_H__ */

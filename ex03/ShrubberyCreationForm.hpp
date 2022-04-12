/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:57:06 by msousa            #+#    #+#             */
/*   Updated: 2022/04/12 20:36:44 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERY_CREATION_FORM_H__
# define __SHRUBBERY_CREATION_FORM_H__

# include "Form.hpp"

# include <fstream>

// ************************************************************************** //
//                        ShrubberyCreationForm Class                         //
// ************************************************************************** //

class ShrubberyCreationForm : public Form {

private:

	typedef ShrubberyCreationForm t;

	ShrubberyCreationForm( void );

public:

	ShrubberyCreationForm( std::string const & target );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	virtual ~ShrubberyCreationForm( void );
	virtual ShrubberyCreationForm &	operator = ( ShrubberyCreationForm const & rhs );

	virtual void	action( void ) const;

};

#endif /* __SHRUBBERY_CREATION_FORM_H__ */

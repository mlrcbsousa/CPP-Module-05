/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:57:06 by msousa            #+#    #+#             */
/*   Updated: 2022/04/12 23:27:58 by msousa           ###   ########.fr       */
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

	static Form*	create( std::string const & target );

};

#endif /* __SHRUBBERY_CREATION_FORM_H__ */

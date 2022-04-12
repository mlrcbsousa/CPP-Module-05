/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:56:28 by msousa            #+#    #+#             */
/*   Updated: 2022/04/12 20:59:30 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMY_REQUEST_FORM_H__
# define __ROBOTOMY_REQUEST_FORM_H__

# include "Form.hpp"

// to set seed for random number
# include <cstdlib>
# include <ctime>

// ************************************************************************** //
//                          RobotomyRequestForm Class                         //
// ************************************************************************** //

class RobotomyRequestForm : public Form {

private:

	typedef RobotomyRequestForm t;

	RobotomyRequestForm( void );

public:

	RobotomyRequestForm( std::string const & target );
	RobotomyRequestForm( t const & src );
	virtual ~RobotomyRequestForm( void );
	virtual RobotomyRequestForm &	operator = ( t const & rhs );

	virtual void	action( void ) const;

};

#endif /* __ROBOTOMY_REQUEST_FORM_H__ */

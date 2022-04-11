/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:56:28 by msousa            #+#    #+#             */
/*   Updated: 2022/04/11 20:56:50 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMY_REQUEST_FORM_H__
# define __ROBOTOMY_REQUEST_FORM_H__

# include <iostream>

// ************************************************************************** //
//                          RobotomyRequestForm Class                         //
// ************************************************************************** //

class RobotomyRequestForm {

public:

	RobotomyRequestForm( void );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	~RobotomyRequestForm( void );
	RobotomyRequestForm &	operator = ( RobotomyRequestForm const & rhs );

private:



};

std::ostream &	operator << ( std::ostream & o, RobotomyRequestForm const & i );

#endif /* __ROBOTOMY_REQUEST_FORM_H__ */

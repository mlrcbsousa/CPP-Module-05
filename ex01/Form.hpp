/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:54:08 by msousa            #+#    #+#             */
/*   Updated: 2022/04/11 20:38:16 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
# define __FORM_H__

# include "Bureaucrat.hpp"

class Bureaucrat;

// ************************************************************************** //
//                               Form Class                             	  //
// ************************************************************************** //

class Form {

public:

	class GradeTooHighException : public std::exception {
	public:
		virtual const char*	what( void ) const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char*	what( void ) const throw();
	};

	Form( std::string const	& name,
		  uint const & gradeSign,
		  uint const & gradeExecute );

	Form( Form const & src );
	~Form( void );
	Form &	operator = ( Form const & rhs );

	std::string	getName( void ) const;
	bool		getSigned( void ) const;
	uint		getGradeSign( void ) const;
	uint		getGradeExecute( void ) const;

	void		beSigned(Bureaucrat bureaucrat);

private:

	Form( void );

	std::string const	name;
	bool				isSigned;
	uint const			gradeSign;
	uint const			gradeExecute;

};

std::ostream &	operator << ( std::ostream & o, Form const & i );

#endif /* __FORM_H__ */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:43:37 by msousa            #+#    #+#             */
/*   Updated: 2022/04/11 17:45:13 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
# define __BUREAUCRAT_H__

# include <iostream>

# define LOG(x) std::cout << x << std::endl
# define ERROR(x) std::cerr << x << std::endl

# define GRADE_MAX 1
# define GRADE_MIN 150

// ************************************************************************** //
//                               Bureaucrat Class                             //
// ************************************************************************** //

class Bureaucrat {

public:

	class GradeTooHighException : public std::exception {
	public:
		virtual const char*	what( void ) const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char*	what( void ) const throw();
	};

	Bureaucrat( std::string const & name, uint grade );
	Bureaucrat( Bureaucrat const & src );
	~Bureaucrat( void );
	Bureaucrat &	operator = ( Bureaucrat const & rhs );

	std::string		getName( void ) const;
	uint			getGrade( void ) const;

	void			incGrade( void );
	void			decGrade( void );

private:

	Bureaucrat( void );

	std::string const	name;
	uint				grade;

};

std::ostream &	operator << ( std::ostream & o, Bureaucrat const & i );

#endif /* __BUREAUCRAT_H__ */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:56:16 by msousa            #+#    #+#             */
/*   Updated: 2022/04/12 20:36:55 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* Constructors */
ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ) :
	Form("ShrubberyCreation", 145, 137, target)
{ /* no-op */ }

ShrubberyCreationForm::ShrubberyCreationForm(
	ShrubberyCreationForm const & src ) :
	Form(src)
{ *this = src; }

/* Destructor */
ShrubberyCreationForm::~ShrubberyCreationForm( void ) { /* no-op */ }

/* Assignment operator */
ShrubberyCreationForm &	ShrubberyCreationForm::operator = (
	ShrubberyCreationForm const & rhs )
{
	(void)rhs;
	return *this;
}

void	ShrubberyCreationForm::action( void ) const
{
	std::string		file(getTarget() + "_shrubbery");
	std::ofstream  	out(file.c_str(), std::ios::binary);

	if (!out.good())
	{
		ERROR("opening file " << file);
		return ;
	}

	out << "               ,@@@@@@@," << std::endl;
	out << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	out << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	out << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	out << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	out << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	out << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	out << "       |o|        | |         | |" << std::endl;
	out << "       |.|        | |         | |" << std::endl;
	out << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;

	out.close();
}

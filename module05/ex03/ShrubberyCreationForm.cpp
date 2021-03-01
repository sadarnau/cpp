/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:46 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/01 10:33:44 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("Shrubbery Creation", 145, 137), target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) : Form(src), target(src.target)
{
	*this = src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs)
{
    this->target = rhs.target;
	return ( *this );
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	Form::execute(executor);

	std::ofstream file;
	file.open(this->target + "_shrubbery");
	if(file.is_open())
	{
		file << "             _\\/_				" << std::endl;
		file << "              /\\				" << std::endl;
		file << "              /\\				" << std::endl;
		file << "             /  \\				" << std::endl;
		file << "             /~~\\o			" << std::endl;
		file << "            /o   \\			" << std::endl;
		file << "           /~~*~~~\\			" << std::endl;
		file << "          o/    o \\			" << std::endl;
		file << "          /~~~~~~~~\\~`		" << std::endl;
		file << "         /__*_______\\			" << std::endl;
		file << "              ||				" << std::endl;
		file << "            \\====/			" << std::endl;
		file << "             \\__/				" << std::endl;
		file.close();
	}
	
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:00:38 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/01 15:55:37 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::Intern( Intern const & src )
{
	*this = src;
	return ;
}

Intern::~Intern( void )
{
	return ;
}

Intern & Intern::operator=( Intern const & rhs)
{
	(void)rhs;
	return ( *this );
}

Form *	Intern::makeForm( std::string const &  form, std::string const &  target )
{
	Form *(Intern::*functions[3])(std::string const &);
	Form *returnForm = NULL;
	std::string formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	functions[0] = &Intern::createRRF;
	functions[1] = &Intern::createPPF;
	functions[2] = &Intern::createSCF;

	for (int i = 0; i < 3; i++)
		if (formNames[i] == form)
		{
			std::cout << "Intern creates " << form << " form." << std::endl;
			returnForm = (this->*functions[i])(target);
		}

	if (!returnForm)
		std::cout << "Intern didn't find any form with this name... (" << form << ")" << std::endl;

	return returnForm;
}

Form *	Intern::createRRF( std::string const & target )
{
	return (new RobotomyRequestForm(target));
}

Form *	Intern::createPPF( std::string const & target )
{
	return (new PresidentialPardonForm(target));
}

Form *	Intern::createSCF( std::string const & target )
{
	return (new ShrubberyCreationForm(target));
}

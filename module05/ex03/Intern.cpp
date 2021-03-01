/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:00:38 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/01 15:28:25 by sadarnau         ###   ########.fr       */
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
	Form *allForms[3];
	Form *returnForm = NULL;
	std::string formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	allForms[0] = new RobotomyRequestForm(target);
	allForms[1] = new PresidentialPardonForm(target);
	allForms[2] = new ShrubberyCreationForm(target);

	for (int i = 0; i < 3; i++)
		if (formNames[i] == form)
		{
			std::cout << "Intern creates " << form << " form." << std::endl;
			returnForm = allForms[i];
		}

	if (!returnForm)
		std::cout << "Intern didn't find any form with this name... (" << form << ")" << std::endl;
	else
		for (int i = 0; i < 3; i++)
			if (allForms[i] != returnForm)
				delete allForms[i];

	return returnForm;
}

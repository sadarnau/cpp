/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:55:17 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 17:27:25 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

int main( void )
{
	Bureaucrat  *god;
	Bureaucrat  *chief;
	Bureaucrat  *coffee_guy;

    std::cout << std::endl << "Instanciating three Bureaucrats" << std::endl << std::endl;

	god = new Bureaucrat( "god", 1 );
	chief = new Bureaucrat( "chief", 42 );
	coffee_guy = new Bureaucrat( "coffee_guy", 150 );

	std::cout << *god;
	std::cout << *chief;
	std::cout << *coffee_guy;

    std::cout << std::endl << "-------" << std::endl << std::endl;

    std::cout << std::endl << "Instanciating three Forms with one wrong (151) :" << std::endl << std::endl;

	Form  *FormPPF = new PresidentialPardonForm("Ricky");
	Form  *FormSCF = new ShrubberyCreationForm("home");
	Form  *FormRRF = new ShrubberyCreationForm("home");
	// Form  *Form150;

	god->signForm(*FormPPF);
	FormPPF->execute(*god);

	god->signForm(*FormSCF);
	FormSCF->execute(*god);
	
	delete (chief);
	delete (god);
	delete (coffee_guy);
	delete (FormPPF);
	delete (FormSCF);

	return 0;
}
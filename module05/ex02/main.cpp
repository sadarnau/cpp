/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:55:17 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/01 13:46:28 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
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

    std::cout << std::endl << "Instanciating three Forms" << std::endl << std::endl;

	Form  *FormPPF = new PresidentialPardonForm("Ricky");
	Form  *FormSCF = new ShrubberyCreationForm("Home");
	Form  *FormRRF = new RobotomyRequestForm("BENDER");

	std::cout << *FormPPF << std::endl;
	std::cout << *FormSCF << std::endl;
	std::cout << *FormRRF << std::endl;

    std::cout << std::endl << "-------" << std::endl << std::endl;

    std::cout << std::endl << "Signing all forms, one wrong !" << std::endl << std::endl;

	chief->signForm(*FormPPF);
	god->signForm(*FormSCF);
	chief->signForm(*FormRRF);

    std::cout << std::endl << "-------" << std::endl << std::endl;

    std::cout << std::endl << "Executing all forms, one is not signed, one have to low grade!" << std::endl << std::endl;

	god->executeForm(*FormPPF);
	chief->executeForm(*FormSCF);
	coffee_guy->executeForm(*FormRRF);

    std::cout << std::endl << "-------" << std::endl << std::endl;

    std::cout << std::endl << "Fixing everything and executing again !" << std::endl << std::endl;

	god->signForm(*FormPPF);
	god->executeForm(*FormPPF);
	chief->executeForm(*FormRRF);

    std::cout << std::endl << std::endl;

	delete (chief);
	delete (god);
	delete (coffee_guy);
	delete (FormPPF);
	delete (FormSCF);
	delete (FormRRF);

	return 0;
}
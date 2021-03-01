/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:55:17 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/01 15:07:48 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <exception>

int main( void )
{
	Intern someRandomIntern;

	Form* RRF;
	Form* PPF;
	Form* SCF;
	Form* wrong;    

    std::cout << std::endl << "Creating four forms with one wrong :" << std::endl << std::endl;

	RRF = someRandomIntern.makeForm("robotomy request", "Bender");
	PPF = someRandomIntern.makeForm("presidential pardon", "Fry");
	SCF = someRandomIntern.makeForm("shrubbery creation", "City");
	wrong = someRandomIntern.makeForm("form 007", "golden eye");

	std::cout << std::endl << "-------" << std::endl << std::endl;

    std::cout << std::endl << "Forms created :" << std::endl << std::endl;

	std::cout << *RRF;
	std::cout << *PPF;
	std::cout << *SCF;

	return 0;
}
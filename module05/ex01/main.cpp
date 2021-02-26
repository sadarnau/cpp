/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:55:17 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 16:17:43 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
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

	Form  *Form1;
	Form  *Form42;
	Form  *Form150;
	try
	{
		Form1 = new Form( "Form1", 1, 1 );
		Form42 = new Form( "Form42", 42, 1 );
		Form150 = new Form( "Form150", 151, 1 );
	}
	catch (std::exception & e)
	{
		std::cerr << "Error message : " << e.what() << std::endl;
	}

    std::cout << std::endl << "-------" << std::endl << std::endl;

    std::cout << "Operator \"<<\" :" << std::endl << std::endl;
	
	Form150 = new Form( "Form150", 150, 1 );

	std::cout << *Form1;
	std::cout << *Form42;
	std::cout << *Form150;

    std::cout << std::endl << "-------" << std::endl << std::endl;

    std::cout << "God trying to sign Form1 : " << std::endl << std::endl;

	try
	{
		god->signForm(*Form1);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error message : " << e.what() << std::endl;
	}

	std::cout << *Form1 << std::endl << std::endl;

	std::cout << "Coffee_guy trying to sign Form42 : " << std::endl << std::endl;
	
	try
	{
		coffee_guy->signForm(*Form42);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error message : " << e.what() << std::endl;
	}

	std::cout << *Form42 << std::endl << std::endl;

	std::cout << "chief trying to sign Form150 : " << std::endl << std::endl;
	
	try
	{
		chief->signForm(*Form150);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error message : " << e.what() << std::endl;
	}

	std::cout << *Form150 << std::endl << std::endl;
	
	delete (chief);
	delete (god);
	delete (coffee_guy);
	delete (Form1);
	delete (Form42);
	delete (Form150);
	return 0;
}
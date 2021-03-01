/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:55:17 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/01 14:58:46 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>

int main( void )
{
    Bureaucrat  *god;
    Bureaucrat  *chief;
    Bureaucrat  *coffee_guy;

    std::cout << std::endl << "Trying to instanciate three Bureaucrats with one of grade 151 and one 0.." << std::endl << std::endl;

	try
	{
		chief = new Bureaucrat( "chief", 42 );
		coffee_guy = new Bureaucrat( "coffee_guy", 151 );
	}
	catch ( std::exception & e )
    {
		std::cerr << "Error message : " << e.what() << std::endl;
    }

	try
	{
		god = new Bureaucrat( "god", 0 );
	}
	catch ( std::exception & e )
    {
		std::cerr << "Error message : " << e.what() << std::endl;
    }

	coffee_guy = new Bureaucrat( "coffee_guy", 150 );
	god = new Bureaucrat( "god", 1 );

    std::cout << std::endl << "-------" << std::endl << std::endl;

    std::cout << "Operator \"<<\" :" << std::endl << std::endl;

	std::cout << *god;
	std::cout << *chief;
	std::cout << *coffee_guy;

    std::cout << std::endl << "-------" << std::endl << std::endl;

    std::cout << "Trying to increment all three Bureaucrats :" << std::endl << std::endl;


	try
	{
		chief->increment();
		coffee_guy->increment();
		god->increment();
	}
	catch (std::exception &e)
	{
		std::cerr << "Error message : " << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << *god;
	std::cout << *chief;
	std::cout << *coffee_guy;
	
	std::cout << std::endl << "-------" << std::endl << std::endl;

	std::cout << "Trying to decrement (X2) all three Bureaucrats :" << std::endl << std::endl;


    try
	{
		chief->decrement();
		god->decrement();
		coffee_guy->decrement();
		chief->decrement();
		god->decrement();
		coffee_guy->decrement();
	}
	catch (std::exception &e)
	{
		std::cerr << "Error message : " << e.what() << std::endl;
	}
    
	std::cout << std::endl;

    std::cout << *god;
	std::cout << *chief;
	std::cout << *coffee_guy;
    
	delete (chief);
	delete (god);
	delete (coffee_guy);
	return 0;
}
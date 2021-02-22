/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:26:56 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 16:03:31 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << std::endl << "-------" << std::endl << std::endl;


	Sorcerer bertrand("Bertrand", "the Frenchie");
	Victim frank("Franky");
	Peon joey("Joey");

	std::cout << std::endl << "test de VAR.getPolymorphed()" << std::endl;

	frank.getPolymorphed();
	joey.getPolymorphed();

	std::cout << std::endl << "test de bertrand.polymorph(static_cast<Victim>(joe))" << std::endl;
	bertrand.polymorph(static_cast<Victim>(joey));

	std::cout << std::endl << "-------" << std::endl << std::endl;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:34:07 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/05 18:25:47 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include "Contact.class.hpp"

int	choose_contact(int i)
{
	int bad_input;
	int	k;

	do {
		std::cout << std::endl << "Choose an index number for more informations : ";
		bad_input = 0;
		std::cin >> k;
		if(!std::cin)
		{
			bad_input = 1;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		}

	} while(bad_input || (k < 0 || k > i));
	
	return k;
}

int	main()
{
	int		i(-1);
	std::string cmd;
	Contact contact[8];
	bool BCL;

	BCL = true;

	std::cout << std::endl << "Welcome to My Awesome PhoneBook :D" << std::endl;
	std::cout << "You can ADD, SEARCH or EXIT !" << std::endl << std::endl;
	
	while (BCL)
	{
		std::cout << std::endl << "What is your command chief ? ";
		std::cin >> cmd;

		if (cmd.compare("ADD") == 0)
		{
			std::cout << std::endl << "Welcome to ADD function" << std::endl;
			if(++i > 7)
				std::cout << std::endl << "Sorry, already 8 contacts" << std::endl;
			else
				contact[i].create_contact();				
		}

		else if (cmd.compare("SEARCH") == 0)
		{
			std::cout << std::endl << "Welcome to SEARCH function, this is your contact list :" << std::endl;
			if(i < 0)
				std::cout << std::endl << "Sorry, you have no contact yet..." << std::endl;
			else
			{
				contact[i].print_contacts(contact, i);
				contact[choose_contact(i)].show_contact();
			}
		}

		else if (cmd.compare("EXIT") == 0)
		{
			std::cout << std::endl << "Bye Bye :(" << std::endl;
			BCL = false;
		}

		else
			std::cout << std::endl << "Sorry, wrong command... (ADD, SEARCH, EXIT)" << std::endl;
	}
}
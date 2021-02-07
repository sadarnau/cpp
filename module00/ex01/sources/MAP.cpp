/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:34:07 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/07 13:15:33 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include "Contact.class.hpp"

int	number_contact(std::string str)
{
	if (str.length() > 1)
		return -1;
	if (str.front() >= '0' && str.front() <= '9')
		return (str.front() - 48);
	return -1;
}

int	choose_contact(int i)
{
	int 		bad_input;
	int			k;
	std::string	str;

	k = 0;
	bad_input = 1;
	while (bad_input && std::cout << std::endl << "Choose an index number for more informations : " && getline(std::cin, str))
	{
		k = number_contact(str);
		if (k <= i && k != -1)
			bad_input = 0;
		else
			std::cout << "Wrong index... plz try again" << std::endl;		
	}
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
	
	while (BCL && std::cout << std::endl << "What is your command ? " && getline(std::cin, cmd))
	{
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
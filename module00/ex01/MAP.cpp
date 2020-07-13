/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:34:07 by sadarnau          #+#    #+#             */
/*   Updated: 2020/07/13 18:45:12 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

void print_contacts(Contact contact, int j)
{
	/*	index | first_name | last_name | nickname */
	
	std::string f_name, l_name, n_name;
	
	if(contact.first_name.size() > 10)
		f_name = contact.first_name.substr(0, 9) + '.';
	else
		f_name = contact.first_name;
	if(contact.last_name.size() > 10)
		l_name = contact.last_name.substr(0, 9) + '.';
	else
		l_name = contact.last_name;
	if(contact.nickname.size() > 10)
		n_name = contact.nickname.substr(0, 9) + '.';
	else
		n_name = contact.nickname;

	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << j << '|';
	std::cout << std::setw (10);
	std::cout << f_name << std::setprecision(10) << '|';
	std::cout << std::setw (10);
	std::cout << l_name << '|';
	std::cout << std::setw (10);
	std::cout << n_name << '|' << std::endl;
}

int	main()
{
	int		i(-1);
	std::string cmd;
	Contact contact[8];

	std::cout << "Welcome to My Awesome PhoneBook :D" << std::endl << std::endl;
	
	while (1)
	{
		std::cout << std::endl << "What is your command chief ? ";
		std::cin >> cmd;

		if (cmd.compare("ADD") == 0)
		{
			std::cout << std::endl << "Welcome to ADD function" << std::endl;
			if(++i > 7)
				std::cout << std::endl << "Already 8 contacts" << std::endl;
			else
				contact[i].create_contact();				
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			int	j(-1);

			std::cout << std::endl << "Welcome to SEARCH function, this is your contact list :" << std::endl;
			if(i < 0)
				std::cout << std::endl << "Sorry you have no contacts yet..." << std::endl;
			else
			{
				std::cout << std::endl << std::setfill (' ') << std::setw (10);
				std::cout << "index" << '|';
				std::cout << std::setw (10);
				std::cout << "first name" << '|';
				std::cout << std::setw (10);
				std::cout << "last name" << '|';
				std::cout << std::setw (10);
				std::cout << "nickname" << '|' << std::endl;
				std::cout<< std::setfill('-')<< std::setw(44)<<"-"<< std::endl;
				while (++j <= i)
					print_contacts(contact[j], j);
				int	k(-1);
				while (k < 0 || k > i)
				{
					std::cout << std::endl << "Choose an index number for more informations : ";
					std::cin >> k;
				}
				contact[k].show_contact();
			}
		}
		else if (cmd.compare("EXIT") == 0)
		{
			std::cout << std::endl << "Bye Bye :(" << std::endl;
			return 0;
		}
		else
			std::cout << std::endl << "Wrong cmd" << std::endl;
	}
}
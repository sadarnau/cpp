/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:27:14 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/07 10:57:41 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include "Contact.class.hpp"

Contact::Contact()
{
	first_name = " ";
	last_name = " ";
	nickname = " ";
	login = " ";
	postal_address = " ";
	email_address = " ";
	phone_number = " ";
	birthday_date = " ";
	favorite_meal = " ";
	underware_color = " ";
	darkest_secret = " ";
}

Contact::~Contact()
{
}

void	Contact::show_contact()
{
	std::cout << std::endl << "firstname = " << first_name << std::endl;
	std::cout << "lastname = " << last_name << std::endl;
	std::cout << "nickname = " << nickname << std::endl;
	std::cout << "login = " << login << std::endl;
	std::cout << "postal address = " << postal_address << std::endl;
	std::cout << "email adress = " << email_address << std::endl;
	std::cout << "phone number = " << phone_number << std::endl;
	std::cout << "birthday date = " << birthday_date << std::endl;
	std::cout << "favorite meal = " << favorite_meal << std::endl;
	std::cout << "underware color = " << underware_color << std::endl;
	std::cout << "darkest secret = " << darkest_secret << std::endl;
}

void	Contact::create_contact()
{
	std::cout << "please enter the first name : ";
	getline(std::cin, first_name);
	std::cout << std::endl;
	std::cout << "please enter the last name : ";
	getline(std::cin, last_name);
	std::cout << std::endl;
	std::cout << "please enter the nickname : ";
	getline(std::cin, nickname);
	std::cout << std::endl;
	std::cout << "please enter the login : ";
	getline(std::cin, login);
	std::cout << std::endl;
	std::cout << "please enter the postal address : ";
	getline(std::cin, postal_address);
	std::cout << std::endl;
	std::cout << "please enter the email address : ";
	getline(std::cin, email_address);
	std::cout << std::endl;
	std::cout << "please enter the phone number : ";
	getline(std::cin, phone_number);
	std::cout << std::endl;
	std::cout << "please enter the birthday date : ";
	getline(std::cin, birthday_date);
	std::cout << std::endl;
	std::cout << "please enter the favorite meal : ";
	getline(std::cin, favorite_meal);
	std::cout << std::endl;
	std::cout << "please enter the underware color : ";
	getline(std::cin, underware_color);
	std::cout << std::endl;
	std::cout << "please enter the darkest secret : ";
	getline(std::cin, darkest_secret);
	std::cout << std::endl;
}

void	Contact::print_contacts(Contact contact[], int i)
{
	/*	index | first_name | last_name | nickname */
	
	int	j(-1);

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
	{
		std::string f_name, l_name, n_name;
		
		if(contact[j].first_name.size() > 10)
			f_name = contact[j].first_name.substr(0, 9) + '.';
		else
			f_name = contact[j].first_name;
		if(contact[j].last_name.size() > 10)
			l_name = contact[j].last_name.substr(0, 9) + '.';
		else
			l_name = contact[j].last_name;
		if(contact[j].nickname.size() > 10)
			n_name = contact[j].nickname.substr(0, 9) + '.';
		else
			n_name = contact[j].nickname;

		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << j << '|';
		std::cout << std::setw (10);
		std::cout << f_name << std::setprecision(10) << '|';
		std::cout << std::setw (10);
		std::cout << l_name << '|';
		std::cout << std::setw (10);
		std::cout << n_name << '|' << std::endl;
	}
}
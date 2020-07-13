/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:27:14 by sadarnau          #+#    #+#             */
/*   Updated: 2020/07/13 18:46:13 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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
	std::cin >> first_name;
	std::cout << std::endl;
	std::cout << "please enter the last name : ";
	std::cin >> last_name;
	std::cout << std::endl;
	std::cout << "please enter the nickname : ";
	std::cin >> nickname;
	std::cout << std::endl;
	std::cout << "please enter the login : ";
	std::cin >> login;
	std::cout << std::endl;
	std::cout << "please enter the postal address : ";
	std::cin >> postal_address;
	std::cout << std::endl;
	std::cout << "please enter the email address : ";
	std::cin >> email_address;
	std::cout << std::endl;
	std::cout << "please enter the phone number : ";
	std::cin >> phone_number;
	std::cout << std::endl;
	std::cout << "please enter the birthday date : ";
	std::cin >> birthday_date;
	std::cout << std::endl;
	std::cout << "please enter the favorite meal : ";
	std::cin >> favorite_meal;
	std::cout << std::endl;
	std::cout << "please enter the underware color : ";
	std::cin >> underware_color;
	std::cout << std::endl;
	std::cout << "please enter the darkest secret : ";
	std::cin >> darkest_secret;
	std::cout << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:03:31 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 15:24:41 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *ptr;
	std::string &ref = string;	

	ptr = &string;

	std::cout << std::endl;

	std::cout << "by ptr : " << *ptr << std::endl << std::endl;
	std::cout << "by ref : " << ref << std::endl;

	std::cout << std::endl;

	return 0;
}
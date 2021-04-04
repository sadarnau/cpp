/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:31:07 by sadarnau          #+#    #+#             */
/*   Updated: 2021/04/04 14:11:40 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main( void )
{
	std::vector<int> vec;
	std::vector<int>::iterator it;
	
	std::cout << "\n-------- Testing with empty vec --------" << std::endl;
	std::cout << "         (searching '3' in vec)\n" << std::endl;

	if (easyfind(vec, 3) == vec.end())
		std::cout << "not found\n";
	else
		std::cout << "found !\n";

	std::cout << "\n-------- Testing with simple vec (0 to 4) --------" << std::endl;
	std::cout << "          (searching '2' in vec)\n" << std::endl;

	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);

	if (easyfind(vec, 2) == vec.end())
		std::cout << "not found\n";
	else
		std::cout << "found !\n";

	std::cout << "          (searching '0' in vec)\n" << std::endl;

	if (easyfind(vec, 0) == vec.end())
		std::cout << "not found\n";
	else
		std::cout << "found !\n";

	std::cout << "          (searching '5' in vec)\n" << std::endl;

	if (easyfind(vec, 5) == vec.end())
		std::cout << "not found\n";
	else
		std::cout << "found !\n";

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:31:07 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/29 12:49:00 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main( void )
{
	std::vector<int> vec;
	std::vector<int>::iterator it;
	
	std::cout << "Empty vec test" << std::endl;

	if (easyfind(vec, 3) == vec.end())
		std::cout << "not found\n";
	else
		std::cout << "found !\n";

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);

	if (easyfind(vec, 3) == vec.end())
		std::cout << "not found\n";
	else
		std::cout << "found !\n";
	return (0);
}
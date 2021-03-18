/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:15:20 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/18 16:43:12 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
	std::cout << "\nTesting on Int :\n\n";

	int arInt[5] = { 0, 1, 2, 3, 4 };
	iter(arInt, 5, &print);
	std::cout << std::endl;

	std::cout << "\nTesting on Double :\n\n";
	double arDouble[5] = { 0.03, 1.1, 2.0, 3.4, 4.009 };
	iter(arDouble, 5, &print);
	std::cout << std::endl;

	std::cout << "\nTesting on string :\n\n";
	std::string arString[] = { "My", "name", "is", "Sam"};
	iter(arString, 4, &print);

	std::cout << "\nTesting on Bool :\n\n";
	bool arBool[4] = { 0, 1, 1, 0 };
	iter(arBool, 4, &print);
	std::cout << std::endl;

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:12:28 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/29 11:24:50 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	std::cout << std::endl;

	Array<int> arInt(3);

	std::cout << "Test with int :\n\n";
	
	std::cout << "At initialization : arInt[" << arInt[0] << ", " << arInt[1] << ", " << arInt[2] << "]" << std::endl;
	
	arInt[0] = 0;
	arInt[1] = 1;
	arInt[2] = 2;
	
	std::cout << "After atribution : arInt[" << arInt[0] << ", " << arInt[1] << ", " << arInt[2] << "]" << std::endl;
	std::cout << "Size = " << arInt.size() << std::endl;
	
	std::cout << "\n--------------\n\n";
	
	std::cout << "Test a copy and an assignment :\n\n";

	Array<int> copy(arInt);
	std::cout << "copy : copy[" << copy[0] << ", " << copy[1] << ", " << copy[2] << "]" << std::endl;
	std::cout << "Size = " << copy.size() << std::endl;

	Array<int> assi;
	assi = arInt;
	std::cout << "assignment : assi[" << assi[0] << ", " << assi[1] << ", " << assi[2] << "]" << std::endl;
	std::cout << "Size = " << assi.size() << std::endl;

	std::cout << "\n--------------\n\n";

	std::cout << "Test of exeption (arInt[5]):\n\n";

	try
	{
		std::cout << arInt[5] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Off limit exption !" << std::endl;
	}

	std::cout << "\n--------------\n\n";

	std::cout << "Test with string : \n" << std::endl;
	
	Array<std::string> arString(4);

	std::cout << "At initialization : arString[" << arString[0] << ", " << arString[1] << ", " << arString[2] << ", " << arString[3] << "]" << std::endl;

	arString[0] = "My";
	arString[1] = "name";
	arString[2] = "is";
	arString[3] = "Sam";

	std::cout << "After atribution : arString[" << arString[0] << ", " << arString[1] << ", " << arString[2] << ", " << arString[3] << "]" << std::endl;
	std::cout << "Size = " << arString.size() << "\n\n";

	return 0;
}
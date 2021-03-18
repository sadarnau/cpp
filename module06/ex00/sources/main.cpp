/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:45:22 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/17 14:42:47 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toConvert.hpp"

int main(int ac, char *av[])
{	
	if (ac != 2)
	{
		std::cout << "usage : ./converter something" << std::endl;
		return 1;
	}

	toConvert *out;
	out = new toConvert(av[1]);

	try
	{
		std::cout << "char: ";
		char c = out->convToChar();
		std::cout << "'" << c << "'" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "int: ";
		int i = out->convToInt();
		std::cout << i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "float: ";
		float f = out->convToFloat();
		if (f - (int)f != (float)0)
			std::cout << f << "f" << std::endl;
		else
			std::cout << f << ".0f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "double: ";
		double d = out->convToDouble();
		std::cout << d;
		if (!(d - (int)d != (double)0))
			std::cout << ".0" << std::endl;
		else
			std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:56:37 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/18 12:26:06 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void * serialize(void)
{
	std::cout << "\nGenerating random values :\n\n";

	char *ptr = new char[20];
	std::string pool = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int i = 0; i < 8; i++)
		ptr[i] = pool[rand() % pool.length()];
	
	std::cout << "For the 8 first bytes : ";
	for (int i = 0; i < 8; i++)
		std::cout << ptr[i];
	std::cout << std::endl;

	*reinterpret_cast<int*>(ptr + 8) = rand() % 10000;
	std::cout << "For the four next :\t" << *reinterpret_cast<int*>(ptr + 8) << std::endl;

	for (int i = 0; i < 8; i++)
		ptr[i + 12] = pool[rand() % pool.length()];

	std::cout << "And last 8 bytes :\t";
	for (int i = 0; i < 8; i++)
		std::cout << ptr[i + 12];
	std::cout << std::endl;
	
	return (ptr);
}

Data * deserialize(void * raw)
{
	Data *ret = new Data;
	
	ret->s1 = std::string(reinterpret_cast<char*>(raw), 8);
	ret->nbr = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	ret->s2 = reinterpret_cast<char*>(raw) + 12;

	return (ret);
}

int main()
{
	void	*raw;
	Data	*data;
	srand(time(NULL));

	for (int i = 0; i < 4; i++)
	{
		std::cout << "\ntest " << i << "/3 :\n";
		raw = serialize();
		data = deserialize(raw);

		std::cout << "\n\nIn data :\n\n";

		std::cout << "S1 =\t" << data->s1 << std::endl;
		std::cout << "nbr =\t" << data->nbr << std::endl;
		std::cout << "S2 =\t" << data->s2 << std::endl;

		std::cout << "\n\n----------\n\n";
	}
	return 0;
}
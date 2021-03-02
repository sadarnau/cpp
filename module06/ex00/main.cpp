/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:45:22 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/02 15:50:52 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toConvert.hpp"

int main(int ac, char *av[])
{
	toConvert *out;
	
	if (ac != 2)
	{
		std::cout << "bouuuuuu" << std::endl;
		return 1;
	}

	out = new toConvert(av[1]);

	return 0;
}
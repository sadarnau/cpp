/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:02:01 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 14:19:15 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.class.hpp"

int	main()
{
	ZombieHorde	horde(5);

	std::cout << "A huge Horde of zombies is coming :" << std::endl << std::endl;
	horde.HordeAnnonce();

	return (0);
}
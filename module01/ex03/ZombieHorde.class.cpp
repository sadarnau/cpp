/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 13:41:32 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 14:16:53 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.class.hpp"  
	
ZombieHorde::ZombieHorde(int n)
{
	this->Zombs = new Zombie[n];
	std::string     name[5] = {"Franck", "Lyly", "Hunter", "Miles", "Francis"};
	srand (time(NULL));
	this->nb_zomb = 0;
	while(this->nb_zomb < n)
		this->Zombs[this->nb_zomb++] = Zombie(name[rand() % 5], "happy");
	return ;
}
	
ZombieHorde::~ZombieHorde()
{
	delete[] this->Zombs;
	std::cout << std::endl << "The Horde is destroyed..." << std::endl;
	return ;
}

void	ZombieHorde::HordeAnnonce()
{
	int	i = 0;

	while (i < this->nb_zomb)
		this->Zombs[i++].advert();
}

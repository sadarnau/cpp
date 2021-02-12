/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:15:47 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 16:47:23 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"  
	
HumanB::HumanB(std::string name)
{
	this->_name = name;
}
	
HumanB::~HumanB()
{
	
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType();
	std::cout << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:15:13 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 16:44:21 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"  
	
HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
	return ;
}
	
HumanA::~HumanA()
{
	
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType();
	std::cout << std::endl;
}

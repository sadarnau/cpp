/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:16:08 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 16:48:28 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"  
	
Weapon::Weapon(std::string type)
{
	this->_type = type;	
}
	
Weapon::~Weapon()
{
	std::cout << std::endl;
	std::cout << "destroying the " << this->_type;
	std::cout << std::endl << std::endl;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	Weapon::getType() const
{
	return(this->_type);
}

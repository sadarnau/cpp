/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 13:52:34 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 13:52:42 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"  

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
	return ;
}
	
Zombie::~Zombie()
{
	
}

void	Zombie::advert()
{
	std::cout << "<" << this->name << "(" << this->type << ")>" << " Braiiiiiiinnnssss ..." << std::endl;
}

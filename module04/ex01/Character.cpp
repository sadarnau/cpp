/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:31:09 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 18:48:10 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const & name ) : name(name), AP(40)
{
	this->weapon = NULL;
	return ;
}

Character::Character( Character const & src )
{
	*this = src;
	return ;
}

Character::~Character( void )
{
	return ;
}

Character & Character::operator=( Character const & rhs)
{
    this->name = rhs.name;
    this->AP = rhs.AP;
    this->weapon = rhs.weapon;
	return ( *this );
}

void		Character::recoverAP( void )
{
	this->AP += 10;
	if (this->AP  > 40)
		this->AP = 40;
	return ;
}

void		Character::equip( AWeapon* weapon )
{
	this->weapon = weapon;
	return ;
}

void		Character::attack( Enemy* enemy )
{
	if (!this->weapon)
		return;
	if (this->AP >= this->weapon->getAPCost())
	{
		std::cout << this->name << " attacks " << enemy->getType();
		std::cout << " with a " << this->weapon->getName() << std::endl;
		weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		if (enemy->getHP() == 0)
			delete (enemy);
		this->AP -= this->weapon->getAPCost();
	}
	return ;
}

std::string	Character::getName( void ) const
{
	return (this->name);
}

int			Character::getAP( void ) const
{
	return (this->AP);
}

AWeapon	*	Character::getWeapon( void ) const
{
	return (this->weapon);
}

std::ostream &	operator<<(std::ostream & o, Character const & rhs)
{
	if (rhs.getWeapon())
	{
		o << rhs.getName() << " has " << rhs.getAP();
		o << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	}
	else
	{
		o << rhs.getName() << " has " << rhs.getAP();
		o << " AP and is unarmed" << std::endl;
	}
	return (o);
}
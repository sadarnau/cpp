/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:13 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 19:00:42 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	return ;
}

Character::Character( std::string name ) : name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

Character::Character( Character const & src )
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete (this->inventory[i]);
	*this = src;
	return ;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete (this->inventory[i]);
	return ;
}

Character & Character::operator=( Character const & rhs)
{
    this->name = rhs.name;
	
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete (this->inventory[i]);
	
	for (int i = 0; i < 4; i++)
		this->inventory[i] = rhs.inventory[i];
 
	return ( *this );
}

std::string const &	Character::getName( void ) const
{
	return (this->name);
}

void 				Character::equip( AMateria * m )
{
	if (!m)
		return ;

	for (int i = 0; i < 4; i++)
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
	return ;
}

void 				Character::unequip( int idx )
{
	if (idx >= 0 && idx < 4)
		this->inventory[idx] = NULL;
	return ;
}

void				Character::use( int idx, ICharacter & target )
{
	if (idx >= 0 && idx < 4)
		if(this->inventory[idx])
			this->inventory[idx]->use(target);
	return ;
}

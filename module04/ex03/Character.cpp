/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:13 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 20:48:17 by sadarnau         ###   ########.fr       */
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
	for (int i = 0; i < 4; i++)
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

	return ;
}

void 				Character::unequip( int idx )
{
	return ;
}

void				Character::use( int idx, ICharacter & target )
{
	return ;
}

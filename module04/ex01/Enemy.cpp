/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:08:21 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/23 17:43:29 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( void )
{
	return ;
}

Enemy::Enemy( int hp, std::string const & type ) : hp(hp), type(type)
{
	return ;
}

Enemy::Enemy( Enemy const & src )
{
	*this = src;
	return ;
}

Enemy::~Enemy( void )
{
	return ;
}

Enemy & Enemy::operator=( Enemy const & rhs)
{
    this->hp = rhs.hp;
    this->type = rhs.type;
	return ( *this );
}

std::string		Enemy::getType( void ) const
{
	return( this->type );
}

int				Enemy::getHP( void ) const
{
	return( this->hp );
}

void			Enemy::takeDamage( int dmg )
{
	this->hp -= dmg;
	if (this->hp < 0)
		this->hp = 0;
	return ;
}

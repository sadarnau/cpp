/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:45:31 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 21:51:51 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aweapon.hpp"

Aweapon::Aweapon( std::string const & name, int apcost, int damage ) : name(name), AP(apcost), damage(damage)
{
	return ;
}

Aweapon::Aweapon( Aweapon const & src )
{
	*this = src;
	return ;
}

Aweapon::~Aweapon( void )
{
	return ;
}

Aweapon & Aweapon::operator=( Aweapon const & rhs)
{
    this->name = rhs.name;
    this->AP = rhs.AP;
    this->damage = rhs.damage;
	return ( *this );
}

std::string	Aweapon::getName( void ) const
{
	return(this->name);
}

int			Aweapon::getAPCost( void ) const
{
	return(this->AP);
}

int			Aweapon::getDamage( void ) const
{
	return(this->damage);
}

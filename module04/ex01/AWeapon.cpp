/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:45:31 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/23 17:29:50 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::AWeapon( std::string const & name, int apcost, int damage ) : name(name), AP(apcost), damage(damage)
{
	return ;
}

AWeapon::AWeapon( AWeapon const & src )
{
	*this = src;
	return ;
}

AWeapon::~AWeapon( void )
{
	return ;
}

AWeapon & AWeapon::operator=( AWeapon const & rhs)
{
    this->name = rhs.name;
    this->AP = rhs.AP;
    this->damage = rhs.damage;
	return ( *this );
}

std::string	const &	AWeapon::getName( void ) const
{
	return(this->name);
}

int			AWeapon::getAPCost( void ) const
{
	return(this->AP);
}

int			AWeapon::getDamage( void ) const
{
	return(this->damage);
}

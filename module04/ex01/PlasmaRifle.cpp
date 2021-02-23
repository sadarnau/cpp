/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:58:00 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/23 17:17:43 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src )
{
	*this = src;
	return ;
}

PlasmaRifle::~PlasmaRifle( void )
{
	return ;
}

PlasmaRifle & PlasmaRifle::operator=( PlasmaRifle const & rhs)
{
    this->name = rhs.name;
    this->AP = rhs.AP;
    this->damage = rhs.damage;
	return ( *this );
}

void	PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}

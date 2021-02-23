/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:05:02 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/23 17:20:25 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist( PowerFist const & src )
{
	*this = src;
	return ;
}

PowerFist::~PowerFist( void )
{
	return ;
}

PowerFist & PowerFist::operator=( PowerFist const & rhs)
{
    this->name = rhs.name;
    this->AP = rhs.AP;
    this->damage = rhs.damage;
	return ( *this );
}

void	PowerFist::attack( void ) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}

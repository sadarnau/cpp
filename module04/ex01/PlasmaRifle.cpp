/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:58:00 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 22:04:11 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : Aweapon("Plasma Rifle", 5, 21)
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

// PlasmaRifle & PlasmaRifle::operator=( PlasmaRifle const & rhs)
// {
//     // this->??? = rhs.???;
// 	return ( *this );
// }

void	attack( void )
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:05:02 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 22:07:27 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : Aweapon("Plasma Rifle", 5, 21)
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

// PowerFist & PowerFist::operator=( PowerFist const & rhs)
// {
//     // this->??? = rhs.???;
// 	return ( *this );
// }

void	attack( void )
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

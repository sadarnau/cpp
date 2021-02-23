/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:29:01 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 22:29:02 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::SuperMutant( SuperMutant const & src )
{
	*this = src;
	return ;
}

SuperMutant::~SuperMutant( void )
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

// SuperMutant & SuperMutant::operator=( SuperMutant const & rhs)
// {
//     // this->??? = rhs.???;
// 	return ( *this );
// }

void	SuperMutant::takeDamage( int dmg )
{
	dmg -= 3;
	if (this->hp - dmg < 0)
		return ;
	this->hp -= dmg;
	return ;
}

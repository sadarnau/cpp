/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:29:09 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/23 17:27:36 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void ) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion( RadScorpion const & src )
{
	*this = src;
	return ;
}

RadScorpion::~RadScorpion( void )
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion & RadScorpion::operator=( RadScorpion const & rhs)
{
	this->type = rhs.type;
	this->hp = rhs.hp;
	return ( *this );
}

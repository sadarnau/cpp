/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:40:09 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 14:08:16 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine( void )
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine( TacticalMarine const & src )
{
	*this = src;
	return ;
}

TacticalMarine::~TacticalMarine( void )
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

TacticalMarine & TacticalMarine::operator=( TacticalMarine const & rhs )
{
	(void)rhs;
	return (*this);
}

ISpaceMarine *	TacticalMarine::clone( void ) const
{
	TacticalMarine * clone = new TacticalMarine(*this);
	return (clone);
}

void			TacticalMarine::battleCry( void ) const
{
	std::cout << "For the holy PLOT!" << std::endl;
	return ;
}

void			TacticalMarine::rangedAttack( void ) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return ;
}

void			TacticalMarine::meleeAttack( void ) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return ;
}

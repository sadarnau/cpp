/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:57:37 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 14:08:58 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( void )
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src )
{
	*this = src;
	return ;
}

AssaultTerminator::~AssaultTerminator( void )
{
	std::cout << "I’ll be back..." << std::endl;
	return ;
}

AssaultTerminator & AssaultTerminator::operator=( AssaultTerminator const & rhs )
{
	(void)rhs;
	return(*this);
}


ISpaceMarine *	AssaultTerminator::clone( void ) const
{
	AssaultTerminator * clone = new AssaultTerminator(*this);
	return (clone);
}

void			AssaultTerminator::battleCry( void ) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return ;
}

void			AssaultTerminator::rangedAttack( void ) const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void			AssaultTerminator::meleeAttack( void ) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return ;
}

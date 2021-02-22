/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:39:16 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 15:43:26 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
	

Peon::Peon( std::string name ) : Victim(name)
{
	std::cout << "Zog zog" << std::endl;
    return ;
}

Peon::Peon( Peon const & src )
{
	*this = src;
	return ;
}

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon & Peon::operator=( Peon const & rhs)
{
	this->name = rhs.name;
	return ( *this );
}

std::string	Peon::getName( void ) const
{
	return (this->name);
}

void Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
    return ;
}

std::ostream &  operator<<( std::ostream & o, Peon const & rhs )
{
	o << "I am " << rhs.getName() << " and I like otters!" << std::endl;
	return (o);
}

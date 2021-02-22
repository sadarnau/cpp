/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:38:51 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 15:47:20 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"  

Victim::Victim( void )
{
    return ;
}

Victim::Victim( std::string name ) : name(name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
    return ;
}

Victim::Victim( Victim const & src)
{
	*this = src;
	return ;
}

Victim::~Victim( void )
{
	std::cout << "Victim " <<  this->name << " just died for no apparent reason!" << std::endl;
	return ;
}

Victim & Victim::operator=( Victim const & rhs)
{
	this->name = rhs.name;
	return ( *this );
}

std::string	Victim::getName( void ) const
{
	return (this->name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
    return ;
}

std::ostream &  operator<<( std::ostream & o, Victim const & rhs )
{
	o << "I am " << rhs.getName() << " and I like otters!" << std::endl;
	return (o);
}

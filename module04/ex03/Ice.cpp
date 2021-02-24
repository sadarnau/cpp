/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:41:57 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 15:09:26 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	return ;
}

Ice::Ice( Ice const & src )
{
	*this = src;
	return ;
}

Ice::~Ice( void )
{
	return ;
}

Ice & Ice::operator=( Ice const & rhs)
{
    this->type = rhs.type;
    this->_xp = rhs._xp;
	return ( *this );
}

Ice *	Ice::clone( void ) const
{
    Ice * clone = new Ice(*this);
    return (clone);
}

void	Ice::use( ICharacter & target )
{
	std::cout << "* shoots an ice bolt at " << target->name << " *" << std::endl;
}

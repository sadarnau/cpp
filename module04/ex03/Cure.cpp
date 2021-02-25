/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:02 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 15:59:20 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	return ;
}

Cure::Cure( Cure const & src )
{
	*this = src;
	return ;
}

Cure::~Cure( void )
{
	return ;
}

Cure & Cure::operator=( Cure const & rhs)
{
	this->type = rhs.type;
	this->_xp = rhs._xp;
	return ( *this );
}

AMateria *	Cure::clone( void ) const
{
    Cure * clone = new Cure(*this);
    return (clone);
}

void		Cure::use( ICharacter & target )
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

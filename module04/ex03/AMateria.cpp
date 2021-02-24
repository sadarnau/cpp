/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:46:18 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 15:09:50 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

AMateria::AMateria( void )
{
	return ;
}

AMateria::AMateria( std::string const & type ) : type(type), _xp(0)
{
	return ;
}

AMateria::AMateria( AMateria const & src )
{
	*this = src;
	return ;
}

AMateria::~AMateria( void )
{
	return ;
}

AMateria & AMateria::operator=( AMateria const & rhs)
{
    this->_xp = rhs._xp;
	return ( *this );
}

std::string const &	AMateria::getType( void ) const
{
	return(this->type);
}

unsigned int		AMateria::getXP( void ) const
{
	return(this->_xp);
}

void		AMateria::use(ICharacter& target)
{
	this->_xp += 10;
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:26 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 14:42:26 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	return ;
}

MateriaSource::MateriaSource( std::string name )
{
	return ;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource( void )
{
	return ;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs)
{
    this->??? = rhs.???;
	return ( *this );
}

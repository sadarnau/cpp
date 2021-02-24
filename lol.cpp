/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lol.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:35:37 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 11:35:37 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "lol.hpp"

lol::lol( void )
{
	return ;
}

lol::lol( std::string name )
{
	return ;
}

lol::lol( lol const & src )
{
	*this = src;
	return ;
}

lol::~lol( void )
{
	return ;
}

lol & lol::operator=( lol const & rhs)
{
    this->??? = rhs.???;
	return ( *this );
}

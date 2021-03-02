/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toConvert.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:45:10 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/02 15:55:55 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "toConvert.hpp"

toConvert::toConvert( std::string in )
{
	//if not string :
	this->in = std::to_string(in[0]); // ???
	//if string :
	//this->in = in;
	return ;
}

toConvert::toConvert( toConvert const & src )
{
	*this = src;
	return ;
}

toConvert::~toConvert( void )
{
	return ;
}

toConvert & toConvert::operator=( toConvert const & rhs)
{
	(void)rhs;
    // this->??? = rhs.???;
	return ( *this );
}

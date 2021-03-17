/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toConvert.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:45:10 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/17 14:43:48 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toConvert.hpp"

toConvert::toConvert( std::string in ) : in(in)
{
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
    this->in = rhs.in;
	return ( *this );
}

char	toConvert::convToChar( void )
{
	int		i;

	try
	{
		i = std::stoi(this->in);		
	}
	catch(const std::exception& e)
	{
		throw(toConvert::ImpossibleConv());
	}
	
	if (i < 0 || i > 127)
		throw(toConvert::ImpossibleConv());
	else if (i < 32 || i > 126)
		throw(toConvert::NonDisplayable());
	else
		return ( (char)i );
}

int		toConvert::convToInt( void )
{
	int		i;
	
	try
	{
		i = std::stoi(this->in);		
	}
	catch(const std::exception& e)
	{
		throw(toConvert::ImpossibleConv());
	}

	return ( i );
}

float		toConvert::convToFloat( void )
{
	float	f;

	try
	{
		f = std::stof(this->in);
	}
	catch(const std::exception& e)
	{
		throw(toConvert::ImpossibleConv());
	}

	return ( f );
}

double		toConvert::convToDouble( void )
{
	double	d;

	try
	{
		d = std::stod(this->in);
	}
	catch(const std::exception& e)
	{
		throw(toConvert::ImpossibleConv());
	}

	return ( d );
}



toConvert::ImpossibleConv::ImpossibleConv( void ) throw()
{}

toConvert::ImpossibleConv::ImpossibleConv( const ImpossibleConv & src) throw()
{
	*this = src;
	return ;
}

toConvert::ImpossibleConv::~ImpossibleConv( void ) throw()
{}

toConvert::ImpossibleConv & toConvert::ImpossibleConv::operator=(const ImpossibleConv & src) throw()
{
	(void)src;
	return (*this);
}

const char *	toConvert::ImpossibleConv::what( void ) const throw()
{
	return ("Impossible conversion.");
}

toConvert::NonDisplayable::NonDisplayable( void ) throw()
{}

toConvert::NonDisplayable::NonDisplayable( const NonDisplayable & src) throw()
{
	*this = src;
	return ;
}

toConvert::NonDisplayable::~NonDisplayable( void ) throw()
{}

toConvert::NonDisplayable & toConvert::NonDisplayable::operator=(const NonDisplayable & src) throw()
{
	(void)src;
	return (*this);
}

const char *	toConvert::NonDisplayable::what( void ) const throw()
{
	return ("Cannot display this char.");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:48:04 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/15 16:20:35 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTORS AND DESTRUCTOR

Fixed::Fixed() : _a( 0 )
{
	return ;
}

Fixed::Fixed( int const nbr )
{
	this->_a = nbr << this->_nbr_bit;
	return ;
}

Fixed::Fixed( float const nbr )
{
	this->_a = roundf( nbr * ( 1 << this->_nbr_bit) );
	return ;
}

Fixed::Fixed( Fixed const & src)
{
	*this = src;
	return ;	
}

Fixed::~Fixed()
{
	return ;
}

// OPERATORS

Fixed & Fixed::operator=( const Fixed &rhs )
{
	this->_a = rhs.getRawBits();
	return ( *this );
}

Fixed & Fixed::operator++()
{
	this->_a++;
	return ( *this );
}

Fixed & Fixed::operator--()
{
	this->_a--;
	return ( *this );
}

Fixed	Fixed::operator++( int )
{
	Fixed ret(*this);
	operator++();
	return ( ret );
}

Fixed	Fixed::operator--( int )
{
	Fixed ret(*this);
	operator--();
	return ( ret );
}

bool	Fixed::operator>( const Fixed &rhs ) const
{
	return ( this->getRawBits() > rhs.getRawBits() );
}

bool	Fixed::operator<( const Fixed &rhs ) const
{
	return ( this->getRawBits() < rhs.getRawBits() );
}

bool	Fixed::operator>=( const Fixed &rhs ) const
{
	return ( this->getRawBits() >= rhs.getRawBits() );
}

bool	Fixed::operator<=( const Fixed &rhs ) const
{
	return ( this->getRawBits() <= rhs.getRawBits() );
}

bool	Fixed::operator==( const Fixed &rhs ) const
{
	return ( this->getRawBits() == rhs.getRawBits() );
}

bool	Fixed::operator!=( const Fixed &rhs ) const
{
	return ( this->getRawBits() != rhs.getRawBits() );
}

Fixed	Fixed::operator+( const Fixed &rhs ) const
{
	return ( this->toFloat() + rhs.toFloat() );
}

Fixed	Fixed::operator-( const Fixed &rhs ) const
{
	return ( this->toFloat() - rhs.toFloat() );
}

Fixed	Fixed::operator*( const Fixed &rhs ) const
{
	return ( this->toFloat() * rhs.toFloat() );
}

Fixed	Fixed::operator/( const Fixed &rhs ) const
{
	return ( this->toFloat() / rhs.toFloat() );
}

// MEMBERS FUNCTIONS 

int		Fixed::getRawBits( void ) const
{
	return ( this->_a );
}

void	Fixed::setRawBits( int const raw )
{
	this->_a = raw;
	return ;
}

float	Fixed::toFloat( void ) const
{
	return ( (float)this->_a / (1 << this->_nbr_bit) );
}

int		Fixed::toInt( void ) const
{
	return ( this->_a >> this->_nbr_bit );
}

Fixed const & Fixed::min( Fixed const & nbr1, Fixed const & nbr2 )
{
	if ( nbr1 < nbr2)
		return ( nbr1 );
	return ( nbr2 );
}

Fixed const & Fixed::max( Fixed const & nbr1, Fixed const & nbr2 )
{
	if ( nbr1 > nbr2)
		return ( nbr1 );
	return ( nbr2 );
}

// OTHER FUNCTIONS

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return ( o );
}

Fixed &	min( Fixed & nbr1, Fixed & nbr2 )
{
	if ( nbr1 < nbr2)
		return ( nbr1 );
	return ( nbr2 );
}

Fixed &	max( Fixed & nbr1, Fixed & nbr2 )
{
	if ( nbr1 > nbr2)
		return ( nbr1 );
	return ( nbr2 );
}

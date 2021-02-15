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

Fixed::Fixed() : _a( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const nbr ) : _a(nbr)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( float const nbr ) : _a(nbr)
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}


Fixed & Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_a = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_a);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_a = raw;
	return ;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_a);
}

int		Fixed::toInt(void) const
{
	return (this->_a);
}

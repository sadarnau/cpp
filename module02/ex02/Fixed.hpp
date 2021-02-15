/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:47:35 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/15 23:41:11 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

# include <string>
# include <iostream>
# include <cmath>

class Fixed
{
private:

	int					_a;
	static const int	_nbr_bit = 8;

public:

	Fixed( void );								//constructors
	Fixed( int const nbr );
	Fixed( float const nbr );
	Fixed( Fixed const & src);					//copy
	~Fixed( void );								//destructor

	Fixed &	operator=( Fixed const & rhs);		//overload operators
	Fixed & operator++( void );
	Fixed & operator--( void );
	Fixed 	operator++( int );
	Fixed	operator--( int );
	
	bool	operator>( const Fixed &rhs ) const;
	bool	operator<( const Fixed &rhs ) const;
	bool	operator<=( const Fixed &rhs ) const;
	bool	operator>=( const Fixed &rhs ) const;
	bool	operator==( const Fixed &rhs ) const;
	bool	operator!=( const Fixed &rhs ) const;

	Fixed	operator+( const Fixed &rhs ) const;
	Fixed	operator-( const Fixed &rhs ) const;
	Fixed	operator*( const Fixed &rhs ) const;
	Fixed	operator/( const Fixed &rhs ) const;


	int		getRawBits( void ) const;				//Members functions
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed static const & min( Fixed const & nbr1, Fixed const & nbr2 );
	Fixed static const & max( Fixed const & nbr1, Fixed const & nbr2 );

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);	//other functions
Fixed &	min( Fixed & nbr1, Fixed & nbr2 );
Fixed &	max( Fixed & nbr1, Fixed & nbr2 );

#endif

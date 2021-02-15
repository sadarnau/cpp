/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:47:35 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/15 16:39:10 by sadarnau         ###   ########.fr       */
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

	Fixed( void );							//constructor
	Fixed( int const nbr );
	Fixed( float const nbr );
	Fixed( Fixed const & src);				//copy
	~Fixed( void );							//destructor

	Fixed &	operator=( Fixed const & rhs);	//overload operator =

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif

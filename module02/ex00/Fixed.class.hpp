/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:47:35 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/15 16:16:28 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

# include <string>
# include <iostream>

class Fixed
{
private:

	int					_a;
	static const int	_nbr_bit = 8;

public:

	Fixed( void );							//constructor
	Fixed( int const a );					//constructor
	Fixed( Fixed const & src);				//copy
	~Fixed( void );							//destructor

	Fixed &	operator=( Fixed const & rhs);	//overload operator =
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif

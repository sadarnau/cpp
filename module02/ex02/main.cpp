/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:26:53 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/15 23:53:56 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "min =  " << Fixed::min( a, b ) << std::endl;

	std::cout << std::endl << std::endl;

	Fixed c = Fixed(3.64f);
	Fixed d = Fixed(33.122f);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "c * a = " << (c * a) << std::endl;
	std::cout << "d + c = " << (d + c) << std::endl;
	std::cout << "b / c = " << (b / c) << std::endl;

	std::cout << "b > c ? " << (b > c) << std::endl;
	std::cout << "d < a ? " << (d < a) << std::endl;
	std::cout << "a >= a ? " << (a >= a) << std::endl;
	std::cout << "c == c ? " << (c == c) << std::endl;
	std::cout << "c != c ? " << (c != c) << std::endl;

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:54:03 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/18 16:09:37 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) 
{
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << "\n\n";

	std::cout << "swapping :\n";
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << "\n\n";
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::cout << "\n-------------\n";
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "\nc = " << c << ", d = " << d << "\n\n";

	std::cout << "swapping :\n";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << "\n\n";
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:19:08 by sadarnau          #+#    #+#             */
/*   Updated: 2021/04/05 16:37:59 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp = Span(5);
    srand(time(NULL));
	
	sp.addNumber(15);
	sp.addNumber(55);
	sp.addNumber(-2);
	sp.addNumber(0);
	sp.addNumber(150);

    std::cout << "\nThe list is :\n" << std::endl;

	sp.showNumbers();
    
	std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span : " << sp.longestSpan() << std::endl;

    std::cout << "\n----------------\n" << std::endl;
    std::cout << "Filling a new array with 10000 random numbers :\n" << std::endl;

	Span sp2 = Span(10000);

	sp2.fillArrayNumber();
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

}
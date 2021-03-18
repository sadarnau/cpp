/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:37:36 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/18 13:02:19 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate( void )
{
	char classs[] = "ABC";
	int i = rand() % 3;

	std::cout << "\nGenerating a class " << classs[i] << "...\n" << std::endl;
		
	if (!i)
		return (new A);
	if (i == 1)
		return (new B);
	return (new C);
}

void identify_from_pointer( Base * p )
{
	std::cout << "Identifying from pointer : ";

	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C\n";

	std::cout << "\n";
}

void identify_from_reference( Base & p)
{
	std::cout << "Identifying from reference : ";

	if (dynamic_cast<A*>(&p) != NULL)
		std::cout << "A\n";
	else if (dynamic_cast<B*>(&p) != NULL)
		std::cout << "B\n";
	else if (dynamic_cast<C*>(&p) != NULL)
		std::cout << "C\n";

	std::cout << "\n";

}

int	main( void )
{
	Base *test;
	srand(time(NULL));

	for (int i = 0; i < 4; i++ )
	{
		std::cout << "\ntest " << i << "/3\n";
		test = generate();

		identify_from_pointer(test);
		identify_from_reference(*test);

		delete (test);
		std::cout << "------------\n";
	}
}

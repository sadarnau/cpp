/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:54:32 by sadarnau          #+#    #+#             */
/*   Updated: 2021/04/05 15:42:24 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "mutantstack.cpp"

int main()
{
	MutantStack<int> mstack;

	std::cout << "\nPush 5 and 17 in stack\n";
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "\nstack.top : ";
	std::cout << mstack.top() << std::endl;

	std::cout << "\nstack.pop, stack.top is now : ";
	mstack.pop();
	std::cout << mstack.top() << std::endl;

	std::cout << "\nstack.size : ";
	std::cout << mstack.size() << std::endl;

	std::cout << "\n------------\n";
	std::cout << "\nPush 3, 5, 737, 42, 0 in stack\n";

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	std::cout << "\nUsing iterators to print the stack :\n";

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\n------------\n";
	std::cout << "\nAssignation and copy :\n";
	
	std::cout << "\nassi = stack, printing assi :\n";
	MutantStack<int>	assi;
	assi = mstack;
	MutantStack<int>::iterator it2 = assi.begin();
	MutantStack<int>::iterator ite2 = assi.end();

	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	std::cout << "\ncopy(stack), printing copy :\n";
	MutantStack<int>	copy(mstack);
	MutantStack<int>::iterator it3 = copy.begin();
	MutantStack<int>::iterator ite3 = copy.end();

	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}

	return 0;
}
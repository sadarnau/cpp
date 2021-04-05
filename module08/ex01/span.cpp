/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:19:12 by sadarnau          #+#    #+#             */
/*   Updated: 2021/04/05 16:37:35 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( int n ) : N(n)
{
    return ;
}

Span::Span( Span const & src )
{
	*this = src;
	return ;
}

Span::~Span( void )
{
	return ;
}

Span & Span::operator=( Span const & rhs)
{
	this->N = rhs.N;
	this->array = rhs.array; /////// ?????????????
	return ( *this );
}

void	Span::addNumber( int n )
{
	if (this->array.size() < this->N)
		this->array.push_back(n);
	else
		throw (std::exception());
}

void	Span::fillArrayNumber( void )
{
	while (this->array.size() < this->N)
		this->array.push_back(rand());
	return;
}

unsigned int	Span::shortestSpan( void )
{
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it2;
	unsigned int			min;

	if (this->array.size() >= 2)
	{
		min = UINT_MAX;
		for (it = this->array.begin(); it < this->array.end(); it++)
			for (it2 = this->array.end() - 1; it2 != it; it2--)
				if (static_cast<unsigned int>(std::max(*it, *it2) -
						std::min(*it, *it2)) < min)
					min = std::max(*it, *it2) - std::min(*it, *it2);
	}
	else
		throw(std::exception());
	return min;
}

unsigned int	Span::longestSpan( void )
{
	std::vector<int>::iterator	it;
	int							mmax;
	int							mmin;

	if (this->array.size() >= 2)
	{
		mmax = this->array[0];
		mmin = this->array[0];
		for (it = this->array.begin(); it < this->array.end(); it++)
		{
			if (*it > mmax)
				mmax = *it;
			if (*it < mmin)
				mmin = *it;
		}
	}
	else
		throw(std::exception());
	return (mmax - mmin);
}

void			Span::showNumbers( void )
{
	std::vector<int>::iterator it;

	for (it = this->array.begin(); it != this->array.end(); it++)
		std::cout << *it << " ";
	std::cout << "\n\n";
	return;
}

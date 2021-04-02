/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:19:12 by sadarnau          #+#    #+#             */
/*   Updated: 2021/04/02 16:51:23 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( int n ) : N(N)
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

unsigned int	Span::shortestSpan( void )
{
	std::vector<int>::iterator	it;
	int							min;

	min = this->array.begin();
	it = this->array.begin();

	for (it; it < this->array.end(); it++)
	{
		min = this->array[*it];
	
	}
}

unsigned int	Span::longestSpan( void )
{

}

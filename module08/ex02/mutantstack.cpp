/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:54:38 by sadarnau          #+#    #+#             */
/*   Updated: 2021/04/05 15:29:19 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template < typename T >
MutantStack<T>::MutantStack( void ) : std::stack<T>()
{
 	return ;
}

template < typename T >
MutantStack<T>::~MutantStack( void )
{
	return ;
}

template < typename T >
MutantStack<T>::MutantStack( MutantStack<T> const & rhs )
{
	*this = rhs;
	return ;
}

template < typename T >
MutantStack<T> & MutantStack<T>::operator=( MutantStack<T> const & rhs )
{
	std::stack<T>::operator = (rhs);
	return (*this);
}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::begin( void )
{
	return (this->c.begin());
}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::end( void )
{
	return (this->c.end());
}
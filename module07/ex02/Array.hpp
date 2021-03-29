/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:49:32 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/29 10:19:05 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>

template < typename T >
class Array
{
private:

	T *				array;
	unsigned int	len;

public:

	Array( void ) : len(0)						//default constructor
	{
		this->array = new T[0];
	}

	Array( unsigned int n ) : len(n)			//constructor
	{
		this->array = new T[n];
	}

	Array( Array const & src)  					//copy
	{
		*this = src;
		return ;
	}

	Array & operator=( Array const & rhs )		//overload operator =
	{
		this->len = rhs.len;
		this->array = new T[this->len];
		for(unsigned int i = 0; i < this->len; i++)
			this->array[i] = rhs.array[i];
		return (*this);
	}

	T & operator[]( unsigned int i )
	{
		if (i >= this->len)
			throw (std::exception());
		return (this->array[i]);
	}

	~Array( void )								//destructor
	{
		delete[] this->array;
		return ;
	}

	int	size( void )
	{
		return(this->len);
	}
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:49:32 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/18 17:00:08 by sadarnau         ###   ########.fr       */
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

	T *	array;
	int	len;

public:

	Array( void ) : len(0)						//default constructor
	{
		this->array = new T[0];
	}

	Array( std::string name )					//constructor
	{}
	Array( Array const & src);  				//copy
	~Array( void );								//destructor
	Array & operator=( Array const & rhs );		//overload operator =
};

#endif

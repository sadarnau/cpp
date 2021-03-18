/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:54:07 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/18 16:12:53 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

template < typename T >
void	swap(T & var1, T & var2)
{
	T tmp;

	tmp = var1;
	var1 = var2;
	var2 = tmp;

	return ;
}

template < typename T >
T const &	min(T const & var1, T const & var2)
{
	return (var2 <= var1 ? var2 : var1 );
}

template < typename T >
T const &	max(T const & var1, T const & var2)
{
	return (var2 >= var1 ? var2 : var1 );
}

#endif
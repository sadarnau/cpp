/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:15:24 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/18 16:43:00 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template < typename T >
void	iter(T * array, int len, void (*f)(T const &))
{
    for (int i = 0; i < len; i++)
		f(array[i]);
}

template < typename T >
void	print(T const & var)
{
	std::cout << var << std::endl;
}

#endif
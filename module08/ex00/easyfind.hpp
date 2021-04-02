/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:31:04 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/29 12:47:58 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <iostream>
# include <string>

template < typename T >
typename T::iterator	easyfind( T & contInt, int search )
{
	return (std::find(contInt.begin(), contInt.end(), search));
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lol.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:35:37 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 11:35:37 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LOL_HPP
#define LOL_HPP

class lol
{
private:


public:

	lol( void );									//default constructor
	lol( std::string name );					//constructor
	lol( lol const & src);  				//copy
	~lol( void );								//destructor
	lol & operator=( lol const & rhs );      //overload operators
};

#endif

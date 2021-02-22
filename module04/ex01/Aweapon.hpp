/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:47:32 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 20:48:23 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H

# include <string>
# include <iostream>

class Aweapon
{
private:


public:

	Aweapon( void );									//default constructor
	Aweapon( std::string name );					//constructor
	Aweapon( Aweapon const & src);  				//copy
	~Aweapon( void );								//destructor
	Aweapon & operator=( Aweapon const & rhs);      //overload operators
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:47:32 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 21:57:04 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H

# include <string>
# include <iostream>

class Aweapon
{
protected:

	std::string name;
	int			damage;
	int			AP;

	Aweapon( void );												//default constructor

public:

	Aweapon( std::string const & name, int apcost, int damage );	//constructor
	Aweapon( Aweapon const & src);  								//copy
	~Aweapon( void );	//dest virtual ?							//destructor
	Aweapon & operator=( Aweapon const & rhs );     				//overload operators

	std::string 	getName( void ) const;
	int				getAPCost( void ) const;
    int				getDamage( void ) const;
    virtual void	attack( void ) const = 0;
};

#endif

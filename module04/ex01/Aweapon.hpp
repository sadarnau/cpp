/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:47:32 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/23 17:13:18 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWeapon_H
#define AWeapon_H

# include <string>
# include <iostream>

class AWeapon
{
protected:

	std::string name;
	int			AP;
	int			damage;

	AWeapon( void );												//default constructor

public:

	AWeapon( std::string const & name, int apcost, int damage );	//constructor
	AWeapon( AWeapon const & src);  								//copy
	virtual ~AWeapon( void );										//destructor
	AWeapon & operator=( AWeapon const & rhs );     				//overload operators

	std::string const &	getName( void ) const;
	int					getAPCost( void ) const;
    int					getDamage( void ) const;
    virtual void		attack( void ) const = 0;
};

#endif

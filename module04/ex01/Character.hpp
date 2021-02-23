/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:31:06 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/23 18:28:19 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

# include <string>
# include <iostream>
# include "Enemy.hpp"
# include "AWeapon.hpp"
# include "RadScorpion.hpp"
# include "SuperMutant.hpp"
# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"

class Character
{
private:

	std::string	name;
	int			AP;
	AWeapon	*	weapon;

	Character( void );									//default constructor

public:

	Character( std::string const & name );				//constructor
	Character( Character const & src);  				//copy
	~Character( void );									//destructor
	Character & operator=( Character const & rhs);      //overload operators

	void		recoverAP( void );
	void		equip( AWeapon* weapon );
	void		attack( Enemy* enemy );
	std::string	getName( void ) const;
	int			getAP( void ) const;
	AWeapon	*	getWeapon( void ) const;
};

std::ostream &	operator<<(std::ostream & o, Character const & rhs);

#endif

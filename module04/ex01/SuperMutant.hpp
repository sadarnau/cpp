/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:18:13 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 22:21:54 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

# include <string>
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:

public:

	SuperMutant( void );									//default constructor
	SuperMutant( SuperMutant const & src);  				//copy
	~SuperMutant( void );								//destructor
	// SuperMutant & operator=( SuperMutant const & rhs);      //overload operators

	virtual void	takeDamage( int dmg );
};

#endif

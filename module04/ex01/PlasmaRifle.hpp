/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:55:47 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 22:04:46 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

# include <string>
# include <iostream>
# include "Aweapon.hpp"

class PlasmaRifle : public Aweapon
{
private:

public:

	PlasmaRifle( void );									//default constructor
	PlasmaRifle( PlasmaRifle const & src);  				//copy
	~PlasmaRifle( void );								//destructor
	// PlasmaRifle & operator=( PlasmaRifle const & rhs);      //overload operators
	
	void	attack( void );
};

#endif

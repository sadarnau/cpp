/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:55:47 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 21:03:51 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:

public:

	PlasmaRifle( void );									//default constructor
	PlasmaRifle( PlasmaRifle const & src);  				//copy
	virtual ~PlasmaRifle( void );							//destructor
	PlasmaRifle & operator=( PlasmaRifle const & rhs);      //overload operators
	
	void	attack( void ) const;
};

#endif

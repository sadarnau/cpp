/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:05:07 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/23 17:20:18 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
#define POWERFIST_H

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:

public:

	PowerFist( void );									//default constructor
	PowerFist( PowerFist const & src);  				//copy
	~PowerFist( void );									//destructor
	PowerFist & operator=( PowerFist const & rhs);      //overload operators

	void	attack( void ) const;
};

#endif

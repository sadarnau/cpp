/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:39:10 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 15:46:47 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
#define PEON_H

#include "Victim.hpp"

class Peon : public Victim
{
private:

	Peon( void );

public:

	Peon( std::string name );					//constructor
	Peon( Peon const & src );					//copy
	~Peon( void );								//destructor
	Peon & operator=( Peon const & rhs );		//overload operator =

	std::string	getName( void ) const;
	void getPolymorphed( void ) const;
};

std::ostream &  operator<<( std::ostream & o, Peon const & rhs );

#endif

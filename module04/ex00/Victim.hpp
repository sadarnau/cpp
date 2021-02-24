/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:39:02 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 20:56:30 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
#define VICTIM_H

# include <string>
# include <iostream>

class Victim  
{
protected:

	std::string	name;
	Victim( void );

public:

	Victim( std::string name );						//constructor
	Victim( Victim const & src);					//copy
	virtual ~Victim( void );						//destructor
	Victim & operator=( Victim const & rhs );		//overload operator =

	std::string	getName( void ) const;
	virtual void getPolymorphed( void ) const;
};

std::ostream &  operator<<( std::ostream & o, Victim const & rhs );

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:40:13 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 14:05:28 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
#define TACTICALMARINE_H

# include "ISpaceMarine.hpp"
# include <string>
# include <iostream>

class TacticalMarine : public ISpaceMarine
{
private:

public:

	TacticalMarine( void );										//default constructor
	TacticalMarine( TacticalMarine const & src);  				//copy
	~TacticalMarine( void );									//destructor
	TacticalMarine & operator=( TacticalMarine const & rhs );   //overload operators

	ISpaceMarine *	clone( void ) const;
	void			battleCry( void ) const;
	void			rangedAttack( void ) const;
	void			meleeAttack( void ) const;
};

#endif

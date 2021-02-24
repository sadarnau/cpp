/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:51:31 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 11:59:18 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
#define ASSAULTTERMINATOR_H

# include "ISpaceMarine.hpp"
# include <string>
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
private:


public:

	AssaultTerminator( void );											//default constructor
	AssaultTerminator( AssaultTerminator const & src);  				//copy
	~AssaultTerminator( void );											//destructor
	AssaultTerminator & operator=( AssaultTerminator const & rhs );		//overload operators

	ISpaceMarine *	clone( void ) const;
	void			battleCry( void ) const;
	void			rangedAttack( void ) const;
	void			meleeAttack( void ) const;
};

#endif

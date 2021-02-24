/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:13:07 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 14:04:41 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
#define SQUAD_H

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include <string>

typedef struct	s_SpaceMarine
{
	ISpaceMarine *	Marine;
	s_SpaceMarine *	next;
}				t_SpaceMarine;

class Squad : public ISquad
{
private:

	t_SpaceMarine *	Marine_list;
	int				count;

public:

	Squad( void );								//default constructor
	Squad( Squad const & src);  				//copy
	~Squad( void );								//destructor
	Squad & operator=( Squad const & rhs );		//overload operators

	int				getCount( void ) const;
	ISpaceMarine *	getUnit( int N ) const;
	int				push( ISpaceMarine * SpaceMarine );
};



#endif

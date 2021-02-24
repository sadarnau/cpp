/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:08:49 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 12:17:50 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
#define ISQUAD_H

# include "ISpaceMarine.hpp"

class ISquad
{
private:

public:

	virtual ~ISquad( void ) {}
	virtual int getCount( void ) const = 0;
	virtual ISpaceMarine* getUnit( int ) const = 0;
	virtual int push( ISpaceMarine* ) = 0;

};

#endif

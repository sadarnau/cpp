/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:11:36 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 12:22:25 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_H
#define ISPACEMARINE_H

class ISpaceMarine
{
private:

public:

	virtual ~ISpaceMarine( void ) {}
	virtual ISpaceMarine* clone( void ) const = 0;
	virtual void battleCry( void ) const = 0;
	virtual void rangedAttack( void ) const = 0;
	virtual void meleeAttack( void ) const = 0;

};

#endif

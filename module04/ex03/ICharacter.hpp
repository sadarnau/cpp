/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:36 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 15:51:06 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>

class ICharacter;
class AMateria;

class ICharacter
{
private:


public:

	virtual						~ICharacter() {}
	virtual std::string const &	getName() const = 0;
	virtual void 				equip( AMateria * m ) = 0;
	virtual void 				unequip( int idx ) = 0;
	virtual void				use( int idx, ICharacter & target ) = 0;

};

#endif

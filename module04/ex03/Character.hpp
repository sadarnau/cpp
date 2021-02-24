/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:13 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 15:23:36 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:

	std::string	name;
	AMateria *	inventory[4];

	Character( void );								//default constructor

public:

	Character( std::string name );					//constructor
	Character( Character const & src); 				//copy
	~Character( void );								//destructor
	Character & operator=( Character const & rhs );	//overload operators

	std::string const &	getName( void ) const;
	void 				equip( AMateria * m );
	void 				unequip( int idx );
	void				use( int idx, ICharacter & target );
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:46:18 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 16:01:11 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria;

class AMateria
{
protected:

	std::string		type;
	unsigned int	_xp;
	AMateria( void ) {};								//default constructor

public:

	AMateria( std::string const & type );			//constructor
	AMateria( AMateria const & src);  				//copy
	virtual ~AMateria( void );						//destructor
	AMateria & operator=( AMateria const & rhs );	//overload operators

	std::string const &	getType( void ) const;		//Returns the materia type
	unsigned int		getXP( void ) const;		//Returns the Materia's XP
	virtual AMateria *	clone( void ) const = 0;
	virtual void		use( ICharacter & target );
};

#endif

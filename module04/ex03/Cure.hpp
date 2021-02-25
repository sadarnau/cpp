/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:02 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 15:58:32 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
private:

public:

	Cure( void );							//default constructor
	Cure( Cure const & src);  				//copy
	virtual ~Cure( void );							//destructor
	Cure & operator=( Cure const & rhs );	//overload operators

	AMateria *	clone( void ) const;
	void		use( ICharacter & target );
};

#endif

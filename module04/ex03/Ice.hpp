/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:41:57 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 16:00:46 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
#define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
private:

public:

	Ice( void );							//default constructor
	Ice( Ice const & src);  				//copy
	virtual ~Ice( void );					//destructor
	Ice & operator=( Ice const & rhs );		//overload operators

	AMateria *	clone( void ) const;
	void		use( ICharacter & target );
};

#endif

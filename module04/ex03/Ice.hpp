/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:41:57 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 15:09:17 by sadarnau         ###   ########.fr       */
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
	~Ice( void );							//destructor
	Ice & operator=( Ice const & rhs );		//overload operators

	Ice *	clone( void ) const;
	void	use( ICharacter & target );
};

#endif

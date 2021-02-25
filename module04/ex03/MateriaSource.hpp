/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:26 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 15:56:25 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include <string>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:

	AMateria *	inventory[4];

public:

	MateriaSource( void );										//default constructor
	MateriaSource( MateriaSource const & src );  				//copy
	~MateriaSource( void );										//destructor
	MateriaSource & operator=( MateriaSource const & rhs );		//overload operators

	virtual void learnMateria( AMateria * materia );
	virtual AMateria* createMateria( std::string const & type );
};

#endif

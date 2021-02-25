/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:26 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 16:21:40 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete (this->inventory[i]);
	return ;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs)
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete (this->inventory[i]);	

	for (int i = 0; i < 4; i++)
		this->inventory[i] = rhs.inventory[i];
 
	return ( *this );
}

void	MateriaSource::learnMateria( AMateria * materia )
{
	if (!materia)
		return ;

	for (int i = 0; i < 4; i++)
		if (!this->inventory[i])
		{
			this->inventory[i] = materia;
			break ;
		}
	return ;
}

AMateria *	MateriaSource::createMateria( std::string const & type )
{
	int	i = 0;

	while(i < 4 && this->inventory[i] &&
		this->inventory[i]->getType() != type)
		i++;
	if (this->inventory[i] && this->inventory[i]->getType() == type)
		return (this->inventory[i]->clone());
	return NULL;
}

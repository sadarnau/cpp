/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:26 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 14:42:26 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class MateriaSource
{
private:


public:

	MateriaSource( void );									//default constructor
	MateriaSource( std::string name );					//constructor
	MateriaSource( MateriaSource const & src);  				//copy
	~MateriaSource( void );								//destructor
	MateriaSource & operator=( MateriaSource const & rhs );      //overload operators
};

#endif

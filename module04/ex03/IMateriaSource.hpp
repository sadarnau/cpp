/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:52 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 15:40:26 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

# include <string>
# include "ICharacter.hpp"


class IMateriaSource
{
public:
	
	virtual ~IMateriaSource() {}
	virtual void learnMateria( AMateria * materia ) = 0;
	virtual AMateria* createMateria( std::string const & type ) = 0;

};

#endif

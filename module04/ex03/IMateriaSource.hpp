/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:52 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 14:42:52 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

class IMateriaSource
{
private:


public:

	IMateriaSource( void );									//default constructor
	IMateriaSource( std::string name );					//constructor
	IMateriaSource( IMateriaSource const & src);  				//copy
	~IMateriaSource( void );								//destructor
	IMateriaSource & operator=( IMateriaSource const & rhs );      //overload operators
};

#endif

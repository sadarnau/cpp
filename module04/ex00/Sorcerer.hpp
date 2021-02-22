/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:38:05 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 15:24:43 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
#define SORCERER_H

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer  
{
private:

	std::string	name;
	std::string	title;

	Sorcerer( void );									//default constructor muted;

public:

	Sorcerer( std::string name, std::string title );	//constructor
	Sorcerer( Sorcerer const & src);					//copy
	~Sorcerer( void );									//destructor
	Sorcerer & operator=( Sorcerer const & rhs );		//overload operators

	std::string	getName( void ) const;
	std::string	getTitle( void ) const;
	void polymorph(Victim const & vict ) const;
};

std::ostream &  operator<<(std::ostream & o, Sorcerer const & rhs);

#endif

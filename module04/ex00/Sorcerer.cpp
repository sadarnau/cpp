/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:37:57 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/22 15:30:45 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"  
	
Sorcerer::Sorcerer( std::string name, std::string title ) : name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
    return ;
}

Sorcerer::Sorcerer( Sorcerer const & src)
{
	*this = src;
	return ;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << this->name << ", " << this->title << " ,is dead.";
	std::cout << " Consequences will never be the same!" << std::endl;
	return ;
}

Sorcerer & Sorcerer::operator=( Sorcerer const & rhs)
{
	this->name = rhs.name;
	this->title = rhs.name;

	return ( *this );
}

std::string	Sorcerer::getName( void ) const
{
	return (this->name);
}

std::string	Sorcerer::getTitle( void ) const
{
	return (this->title);
}

void Sorcerer::polymorph(Victim const & vict ) const
{
	vict.getPolymorphed();
	return ;
}

std::ostream &  operator<<( std::ostream & o, Sorcerer const & rhs )
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies!" << std::endl;
	return (o);
}
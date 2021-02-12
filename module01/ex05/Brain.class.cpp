/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:29:13 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 16:08:28 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"  
	
Brain::Brain()
{
	this->_nbOfCells = 1000;
	this->_mood = "HAPPY";
}
	
Brain::~Brain()
{
	
}

std::string	Brain::identify() const
{
	std::stringstream	s;
	long				adr = (long)this;

	s << "0x" << std::hex << adr;
	return(s.str());
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:34:34 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 15:57:29 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.class.hpp"  
	
Human::Human()
{
	
}
	
Human::~Human()
{
	
}

const Brain	&Human::getBrain() const
{
	return (this->_MyBrain);
}

std::string	Human::identify() const
{
	return(this->_MyBrain.identify());

}

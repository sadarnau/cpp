/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:34:46 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 15:55:40 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_CLASS_H
#define BRAIN_CLASS_H

# include <string>
# include <iostream>
# include <sstream>

class Brain
{
private:
	
	int			_nbOfCells;
	std::string	_mood;

public:

	Brain();
	~Brain();

	std::string	identify() const ;

};
#endif
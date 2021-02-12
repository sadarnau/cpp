/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:16:16 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 16:39:13 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

# include <string>
# include <iostream>

class Weapon  
{
private:

	std::string	_type;

public:

	Weapon(std::string type);
	~Weapon();
	
	std::string	getType() const;
	void		setType(std::string type);

};

#endif

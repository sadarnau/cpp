/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:15:30 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 16:41:50 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA  
{
private:

	Weapon		&_weapon;
	std::string	_name;

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void	attack();

};

#endif

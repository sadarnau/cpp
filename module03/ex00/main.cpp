/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:15:51 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/18 14:11:30 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void )
{
	FragTrap	*first, *second;

	srand (time(NULL));
	
	first = new FragTrap("Jack");
	second = new FragTrap();

	std::cout << std::endl;
	
	first->meleeAttack("Frank");
	first->rangedAttack("Francis");

	std::cout << std::endl;

	first->takeDamage(60);
	first->takeDamage(30);
	first->takeDamage(100);
	std::cout << "hitpoints : " << first->getHitPoints() << std::endl;

	std::cout << std::endl;

	first->beRepaired(250);
	std::cout << "hitpoints : " << first->getHitPoints() << std::endl;

	std::cout << std::endl;

	first->vaulthunter_dot_exe("Georges");
	first->vaulthunter_dot_exe("Georges");
	first->vaulthunter_dot_exe("Georges");
	first->vaulthunter_dot_exe("Georges");
	first->vaulthunter_dot_exe("Georges");
	first->vaulthunter_dot_exe("Georges");

	std::cout << std::endl;

	delete(first);
	return (0);
}

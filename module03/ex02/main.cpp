/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:15:51 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/18 15:46:49 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	delete(second);

	std::cout << std::endl;

	ScavTrap	*Scav1, *Scav2;

	Scav1 = new ScavTrap("The Door Handler");
	Scav2 = new ScavTrap();
	
	std::cout << std::endl;
	
	Scav1->meleeAttack("Frank");
	Scav2->rangedAttack("Francis");

	std::cout << std::endl;
	
	Scav1->takeDamage(60);
	Scav1->takeDamage(30);
	Scav1->takeDamage(100);
	std::cout << "hitpoints : " << Scav1->getHitPoints() << std::endl;

	std::cout << std::endl;

	Scav1->beRepaired(250);
	std::cout << "hitpoints : " << Scav1->getHitPoints() << std::endl;

	std::cout << std::endl;

	Scav1->challengeNewcomer();
	std::cout << std::endl;
	Scav1->challengeNewcomer();
	std::cout << std::endl;
	Scav1->challengeNewcomer();

	std::cout << std::endl;

	delete(Scav1);
	delete(Scav2);
	return (0);
}

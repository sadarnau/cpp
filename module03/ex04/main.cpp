/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:15:51 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/18 16:54:24 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

int	main( void )
{
	srand (time(NULL));

	/////////////// FRAGTRAP ///////////////////

	FragTrap	*first, *second;
	
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
	std::cout << std::endl;

	/////////////// SCAVTRAP ///////////////////

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
	std::cout << std::endl;

	/////////////// NINJATRAP ///////////////////

	NinjaTrap	*Ninja1, *Ninja2;

	Ninja1 = new NinjaTrap("SpacePoop");
	Ninja2 = new NinjaTrap();

	std::cout << std::endl;
	
	Ninja1->meleeAttack("Frank");
	Ninja2->rangedAttack("Francis");

	std::cout << std::endl;
	
	Ninja1->takeDamage(60);
	Ninja1->takeDamage(30);
	Ninja1->takeDamage(100);
	std::cout << "hitpoints : " << Ninja1->getHitPoints() << std::endl;

	std::cout << std::endl;

	Ninja1->beRepaired(250);
	std::cout << "hitpoints : " << Ninja1->getHitPoints() << std::endl;

	std::cout << std::endl;

	Ninja1->ninjaShoebox( *first );
	std::cout << std::endl;
	Ninja1->ninjaShoebox( *Scav1 );
	std::cout << std::endl;
	Ninja1->ninjaShoebox( *Ninja2 );
	std::cout << std::endl;
	ClapTrap *Clap1;
	Clap1 = new ClapTrap("ClapTest");
	Ninja1->ninjaShoebox( *Clap1 );

	std::cout << std::endl << std::endl;

	/////////////// SUPERTRAP ///////////////////

	SuperTrap	*Super1, *Super2;

	Super1 = new SuperTrap("SuperHyper");
	Super2 = new SuperTrap();

	std::cout << std::endl;
	
	Super1->meleeAttack("Frank");
	Super2->rangedAttack("Francis");

	std::cout << std::endl;
	
	Super1->takeDamage(60);
	Super1->takeDamage(30);
	Super1->takeDamage(100);
	std::cout << "hitpoints : " << Super1->NinjaTrap::getHitPoints() << std::endl;

	std::cout << std::endl;

	Super1->beRepaired(250);
	std::cout << "hitpoints : " << Super1->FragTrap::getHitPoints() << std::endl;

	std::cout << std::endl;

	Super1->ninjaShoebox( *first );
	std::cout << std::endl;
	Super1->vaulthunter_dot_exe( "Bryan" );
	std::cout << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << "Deleting everything :" << std::endl << std::endl << std::endl;

	delete(first);
	delete(second);
	std::cout << std::endl;
	delete(Scav1);
	delete(Scav2);
	std::cout << std::endl;
	delete(Clap1);
	std::cout << std::endl;
	delete(Ninja1);
	delete(Ninja2);
	std::cout << std::endl;
	delete(Super1);
	delete(Super2);
	
	return (0);
}

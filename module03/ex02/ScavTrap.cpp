/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:15:18 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/18 15:40:12 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"  
	
ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->name = "LIL_SCAV_TR4P";
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;

	std::cout << "Ceating a Non-Welcoming RoBot..........." << std::endl;
	std::cout << "Hello my name is LIL_SCAV_TR4P, I'm a very welcoming BOT :D" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;

	std::cout << "Ceating a Non-Welcoming RoBot..........." << std::endl;
	std::cout << "Hello my name is " << name << ", I'm a very welcoming BOT :D" << std::endl;

	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	*this = src;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << this->name << " : ARGHHH.. The sky is pulling me..." << std::endl;
	std::cout << "/DIED!" << std::endl;
	return ;
}

void	ScavTrap::rangedAttack( std::string const & target )
{
	std::cout << "SCAV-TP " << this->name << " attacks " << target << " at range, causing ";
	std::cout << this->rangedAttackDamage << " points of damage!" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack( std::string const & target )
{
	std::cout << "SCAV-TP " << this->name << " attacks " << target << " at melee, causing ";
	std::cout << this->meleeAttackDamage << " points of damage!" << std::endl;
	return ;
}

void	ScavTrap::challengeNewcomer( void )
{
	std::string     challenges[5] = {"Brain Surgeon", "Your Kung Fu is Best", "Why do you even carry a gun?", "Aggravated Assault", "Catch-a-Rocket!"};

	std::cout << "Welcome Newcommer, I will choose a random challenge for you...." << std::endl;
	std::cout << "Computing............" << std::endl;
	std::cout << "time left before decision : " << 5.2 * (rand() % 5) << " years" << std::endl;
	std::cout << "Random module overheating, warning, warning, warning" << std::endl;
	std::cout << "The challenge will be : " << challenges[rand() % 5] << std::endl;
}

int		ScavTrap::getHitPoints( void ) const
{
	return (this->hitPoints);
}

int		ScavTrap::getEnergyPoints( void ) const
{
	return (this->energyPoints);
}

int		ScavTrap::getLevel( void ) const
{
	return (this->level);
}

int		ScavTrap::getMelee( void ) const
{
	return (this->meleeAttackDamage);
}

int		ScavTrap::getRanged( void ) const
{
	return (this->rangedAttackDamage);
}

int		ScavTrap::getArmor( void ) const
{
	return (this->armorDamageReduction);
}

std::string	ScavTrap::getName( void ) const
{
	return (this->name);
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs)
{
	this->hitPoints = rhs.getHitPoints();
	this->energyPoints = rhs.getEnergyPoints();
	this->level = rhs.getLevel();
	this->meleeAttackDamage = rhs.getMelee();
	this->rangedAttackDamage = rhs.getRanged();
	this->armorDamageReduction = rhs.getArmor();
	this->name = rhs.getName();

	return ( *this );
}

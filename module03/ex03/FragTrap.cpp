/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:16:39 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/18 15:39:38 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp" 

FragTrap::FragTrap( void ) : ClapTrap()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->name = "LIL_TR4P";
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;

	std::cout << "Ceating a devil RoBot..........." << std::endl;
	std::cout << "Hello my name is LIL_TR4P, I'm a beautiful BOT :D" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;

	std::cout << "Ceating a devil RoBot..........." << std::endl;
	std::cout << "Hello my name is " << name << ", I'm a beautiful BOT :D" << std::endl;

	return ;
}

FragTrap::FragTrap( FragTrap const & src )
{
	*this = src;
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << this->name << " : ARGHHH.. The sky is pulling me..." << std::endl;
	std::cout << "/DIED!" << std::endl;
	return ;
}

void	FragTrap::rangedAttack( std::string const & target )
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing ";
	std::cout << this->rangedAttackDamage << " points of damage!" << std::endl;
	return ;
}

void	FragTrap::meleeAttack( std::string const & target )
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, causing ";
	std::cout << this->meleeAttackDamage << " points of damage!" << std::endl;
	return ;
}

void	FragTrap::vaulthunter_dot_exe( std::string const & target )
{
	std::string     attaks[5] = {"Lacerator", "Razor", "The Clipper", "Hyperion Reaper", "Sucker punch"};
	
	if (this->energyPoints < 25)
		std::cout << "Sorry, not enough energy points...." << std::endl;
	else
	{
		std::cout << this->name << " attacks " << target << " with " << attaks[rand() % 5] << std::endl;
		this->energyPoints -= 25;
	}
}

int		FragTrap::getHitPoints( void ) const
{
	return (this->hitPoints);
}

int		FragTrap::getEnergyPoints( void ) const
{
	return (this->energyPoints);
}

int		FragTrap::getLevel( void ) const
{
	return (this->level);
}

int		FragTrap::getMelee( void ) const
{
	return (this->meleeAttackDamage);
}

int		FragTrap::getRanged( void ) const
{
	return (this->rangedAttackDamage);
}

int		FragTrap::getArmor( void ) const
{
	return (this->armorDamageReduction);
}

std::string	FragTrap::getName( void ) const
{
	return (this->name);
}

FragTrap & FragTrap::operator=( FragTrap const & rhs)
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

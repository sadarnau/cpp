/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:39:24 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/18 15:49:20 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"  

ClapTrap::ClapTrap( void )
{
	this->hitPoints = 0;
	this->maxHitPoints = 0;
	this->energyPoints = 0;
	this->maxEnergyPoints = 0;
	this->level = 0;
	this->name = "LIL_CLAP";
	this->meleeAttackDamage = 0;
	this->rangedAttackDamage = 0;
	this->armorDamageReduction = 0;

	std::cout << "Ceating CLAP_TRAP..........." << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name )
{
	this->hitPoints = 0;
	this->maxHitPoints = 0;
	this->energyPoints = 0;
	this->maxEnergyPoints = 0;
	this->level = 0;
	this->name = name;
	this->meleeAttackDamage = 0;
	this->rangedAttackDamage = 0;
	this->armorDamageReduction = 0;

	std::cout << "Ceating CLAP_TRAP..........." << std::endl;

	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	*this = src;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Deleting CLAP_TRAP........" << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << this->name << " has been attacked, he undergoes " << amount << " points of damage..." << std::endl;
	this->hitPoints -= (amount - armorDamageReduction);
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << this->name << " is repairing itself ?!" << std::endl;
	std::cout << "Horrible to see what's going on but he gain " << amount << " hitpoints" << std::endl;
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	return ;
}

int		ClapTrap::getHitPoints( void ) const
{
	return (this->hitPoints);
}

int		ClapTrap::getEnergyPoints( void ) const
{
	return (this->energyPoints);
}

int		ClapTrap::getLevel( void ) const
{
	return (this->level);
}

int		ClapTrap::getMelee( void ) const
{
	return (this->meleeAttackDamage);
}

int		ClapTrap::getRanged( void ) const
{
	return (this->rangedAttackDamage);
}

int		ClapTrap::getArmor( void ) const
{
	return (this->armorDamageReduction);
}

std::string	ClapTrap::getName( void ) const
{
	return (this->name);
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs)
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

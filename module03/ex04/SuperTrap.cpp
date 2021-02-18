/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:21:40 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/18 16:58:59 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"  

SuperTrap::SuperTrap( void ) : ClapTrap(), NinjaTrap(), FragTrap()
{
	this->hitPoints = this->FragTrap::hitPoints;
	this->maxHitPoints = this->FragTrap::maxHitPoints;
	this->energyPoints = this->NinjaTrap::energyPoints;
	this->maxEnergyPoints = this->NinjaTrap::maxEnergyPoints;
	this->level = 1;
	this->name = "LIL_SUP_TR4p";
	this->meleeAttackDamage = this->NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = this->FragTrap::rangedAttackDamage;
	this->armorDamageReduction = this->FragTrap::armorDamageReduction;

	std::cout << "Am I LIL_SUP_TR4p ? I'm LIL NIIIIIIINJA, no.. i'm LIL_SUP_TR4p !" << std::endl;
	return ;
}

SuperTrap::SuperTrap( std::string name ): ClapTrap( name ), NinjaTrap( name ), FragTrap( name )
{
	this->hitPoints = this->FragTrap::hitPoints;
	this->maxHitPoints = this->FragTrap::maxHitPoints;
	this->energyPoints = this->NinjaTrap::energyPoints;
	this->maxEnergyPoints = this->NinjaTrap::maxEnergyPoints;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = this->NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = this->FragTrap::rangedAttackDamage;
	this->armorDamageReduction = this->FragTrap::armorDamageReduction;

	std::cout << "Am I " << this->name << " ? I'm LIL NIIIIIIINJA, no.. i'm " << this->name << " !" << std::endl;
	return ;
}

SuperTrap::SuperTrap( SuperTrap const & src ) : ClapTrap(src)
{
	*this = src;
	return ;
}

SuperTrap::~SuperTrap( void )
{
	std::cout << this->name << " : stupidly died from eating rocks.." << std::endl;
	return ;
}

SuperTrap & SuperTrap::operator=( SuperTrap const & rhs)
{
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->level = rhs.level;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangedAttackDamage = rhs.rangedAttackDamage;
	this->armorDamageReduction = rhs.armorDamageReduction;
	this->name = rhs.name;

	return ( *this );
}


void SuperTrap::rangedAttack( std::string const & target )
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack( std::string const & target )
{
	NinjaTrap::meleeAttack(target);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 15:50:21 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/18 16:13:58 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"  
	
NinjaTrap::NinjaTrap( void ) : ClapTrap()
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->name = "LIL_NINJA";
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;

	std::cout << "I'm LIL NIIIIIIINJA" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap( name )
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;

	std::cout << "I'm " << name << "the NINJAAAAAAAAA" << std::endl;

	return ;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src )
{
	*this = src;
	return ;
}

NinjaTrap::~NinjaTrap( void )
{
	std::cout << this->name << " : ARGHHH.. The sky is pulling me..." << std::endl;
	std::cout << "/DIED!" << std::endl;
	return ;
}

void	NinjaTrap::rangedAttack( std::string const & target )
{
	std::cout << this->name << " attacks " << target << " at range, causing ";
	std::cout << this->rangedAttackDamage << " points of damage!" << std::endl;
	return ;
}

void	NinjaTrap::meleeAttack( std::string const & target )
{
	std::cout << this->name << " attacks " << target << " at melee, causing ";
	std::cout << this->meleeAttackDamage << " points of damage!" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox( FragTrap const & target )
{
	std::cout << "Sneaky attack on FragTrap" << std::endl;
	std::cout << target.getName() << " : OUCH, my head..." << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox( ScavTrap const & target )
{
	std::cout << "NINJA attack on ScavTrap" << std::endl;
	std::cout << target.getName() << " : OUCHIE, my butt..." << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox( NinjaTrap const & target )
{
	std::cout << "NINJASTIC attack on NinjaTrap" << std::endl;
	std::cout << target.getName() << " : AIEEE, my ninjaness is leaving..." << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox( ClapTrap const & target )
{
	std::cout << "Brute force attack on ClapTrap" << std::endl;
	std::cout << target.getName() << " : AIEEE, to be Claptrap or not..." << std::endl;
	return ;
}

int		NinjaTrap::getHitPoints( void ) const
{
	return (this->hitPoints);
}

int		NinjaTrap::getEnergyPoints( void ) const
{
	return (this->energyPoints);
}

int		NinjaTrap::getLevel( void ) const
{
	return (this->level);
}

int		NinjaTrap::getMelee( void ) const
{
	return (this->meleeAttackDamage);
}

int		NinjaTrap::getRanged( void ) const
{
	return (this->rangedAttackDamage);
}

int		NinjaTrap::getArmor( void ) const
{
	return (this->armorDamageReduction);
}

std::string	NinjaTrap::getName( void ) const
{
	return (this->name);
}

NinjaTrap & NinjaTrap::operator=( NinjaTrap const & rhs)
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

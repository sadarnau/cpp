/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:15:30 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/18 14:20:28 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

# include <string>
# include <iostream>
# include <ctime>

class ScavTrap  
{
private:

	int			hitPoints;
	int			maxHitPoints;
	int			energyPoints;
	int			maxEnergyPoints;
	int			level;
	std::string	name;
	int			meleeAttackDamage;
	int			rangedAttackDamage;
	int			armorDamageReduction;
	
public:

	ScavTrap(void);									//default constructor
	ScavTrap( std::string name );					//constructor
	ScavTrap( ScavTrap const & src);  				//copy
	~ScavTrap( void );								//destructor
	ScavTrap & operator=( ScavTrap const & rhs);	//overload operators

	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	challengeNewcomer( void );

	int			getHitPoints( void ) const;
	int			getEnergyPoints( void ) const;
	int			getLevel( void ) const;
	int			getMelee( void ) const;
	int			getRanged( void ) const;
	int			getArmor( void ) const;
	std::string	getName( void ) const;

};

#endif

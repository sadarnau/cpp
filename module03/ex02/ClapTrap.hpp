/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:39:30 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/18 15:38:55 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

# include <string>
# include <iostream>
# include <ctime>

class ClapTrap  
{
protected:

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

	ClapTrap(void);									//default constructor
	ClapTrap( std::string name );					//constructor
	ClapTrap( ClapTrap const & src);  				//copy
	~ClapTrap( void );								//destructor
	ClapTrap & operator=( ClapTrap const & rhs);	//overload operators

	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	int			getHitPoints( void ) const;
	int			getEnergyPoints( void ) const;
	int			getLevel( void ) const;
	int			getMelee( void ) const;
	int			getRanged( void ) const;
	int			getArmor( void ) const;
	std::string	getName( void ) const;
};

#endif

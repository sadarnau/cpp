/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:16:47 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/18 16:37:36 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

# include <string>
# include <iostream>
# include <ctime>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:
	
public:
	
	FragTrap(void);									//default constructor
	FragTrap( std::string name );					//constructor
	FragTrap( FragTrap const & src);  				//copy
	~FragTrap( void );								//destructor
	FragTrap & operator=( FragTrap const & rhs);	//overload operators

	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	vaulthunter_dot_exe( std::string const & target );

	int			getHitPoints( void ) const;
	int			getEnergyPoints( void ) const;
	int			getLevel( void ) const;
	int			getMelee( void ) const;
	int			getRanged( void ) const;
	int			getArmor( void ) const;
	std::string	getName( void ) const;

};

#endif

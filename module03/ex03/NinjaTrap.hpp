/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 15:50:26 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/18 16:10:02 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
#define NINJATRAP_H

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:

public:
	
	NinjaTrap(void);									//default constructor
	NinjaTrap( std::string name );					//constructor
	NinjaTrap( NinjaTrap const & src);  				//copy
	~NinjaTrap( void );								//destructor
	NinjaTrap & operator=( NinjaTrap const & rhs);	//overload operators

	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	ninjaShoebox( FragTrap const & target );
	void	ninjaShoebox( ScavTrap const & target );
	void	ninjaShoebox( NinjaTrap const & target );
	void	ninjaShoebox( ClapTrap const & target );

	int			getHitPoints( void ) const;
	int			getEnergyPoints( void ) const;
	int			getLevel( void ) const;
	int			getMelee( void ) const;
	int			getRanged( void ) const;
	int			getArmor( void ) const;
	std::string	getName( void ) const;


};

#endif

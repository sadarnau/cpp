/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:21:45 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/18 16:34:17 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
#define SUPERTRAP_H

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
private:

public:

	SuperTrap(void);								//default constructor
	SuperTrap( std::string name );					//constructor
	SuperTrap( SuperTrap const & src);  			//copy
	~SuperTrap( void );								//destructor
	SuperTrap & operator=( SuperTrap const & rhs);	//overload operators

	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
};

#endif

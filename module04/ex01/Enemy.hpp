/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:08:16 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/23 17:40:41 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
#define ENEMY_H

# include <string>
# include <iostream>

class Enemy
{
protected:
	
	int			hp;
	std::string	type;
	Enemy( void );									//default constructor

public:

	Enemy( int hp, std::string const & type );		//constructor
	Enemy( Enemy const & src);  					//copy
	virtual ~Enemy( void );							//destructor
	Enemy & operator=( Enemy const & rhs);  	    //overload operators

	std::string		getType( void ) const;
	int				getHP( void ) const;
	virtual void	takeDamage( int dmg );
};

#endif

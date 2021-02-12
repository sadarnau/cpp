/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 13:39:49 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 13:59:06 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_CLASS_H
#define ZOMBIEHORDE_CLASS_H

# include "Zombie.class.hpp"

class ZombieHorde  
{
private:

	int		nb_zomb;
	Zombie	*Zombs;

public:

	ZombieHorde(int n);
	~ZombieHorde();
	void	HordeAnnonce();
};

#endif

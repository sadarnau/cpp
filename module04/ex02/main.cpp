/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:04:46 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 17:43:39 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
    }

	delete vlc;

	std::cout << std::endl << "--------" << std::endl << std::endl;

	ISpaceMarine* boby = new TacticalMarine;
	ISpaceMarine* jimmy = new AssaultTerminator;
	ISpaceMarine* copy_boby = boby->clone();
	ISpaceMarine* copy_jimmy = jimmy->clone();

	std::cout << std::endl << "Creating a new squad and pushing 4 Marines :" << std::endl << std::endl;

	vlc = new Squad;

	std::cout << "count = " << vlc->push(boby) << std::endl;
	std::cout << "count = " << vlc->push(jimmy) << std::endl;
	std::cout << "count = " << vlc->push(copy_jimmy) << std::endl;
	std::cout << "count = " << vlc->push(copy_boby) << std::endl;

	for (int i = 0; i < vlc->getCount(); ++i)
	{
	std::cout << std::endl << "marine number : " << i << std::endl;
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
    }

	std::cout << std::endl;

	delete vlc;

	return 0;
}

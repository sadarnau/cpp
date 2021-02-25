/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:06:57 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 18:46:33 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();
	Enemy* a = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << std::endl << "--------" << std::endl << std::endl;

	me->attack(a);
	std::cout << *me;
	me->equip(pf);
	me->attack(a);
	std::cout << *me;

	std::cout << std::endl << "--------" << std::endl << std::endl;

	delete(me);
	delete(a);
	delete(pr);
	delete(pf);

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:43:34 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 17:09:24 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <string>
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl << "----------" << std::endl << std::endl;	

	std::cout << "Unequip Cure (index 1) and using it (nothing should appear) :" << std::endl << std::endl;	
	me->unequip(1);
	me->use(1, *bob);

	delete (tmp); // because unequip doesn't delete materia

	std::cout << "Creating new false materia \"kriket\" try to equip on index 1" << std::endl;	
	tmp = src->createMateria("kriket");
	me->equip(tmp);
	std::cout << "Using it (nothing should appear) :" << std::endl << std::endl;	
	me->use(1, *bob);

	std::cout << std::endl << "----------" << std::endl << std::endl;	

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	std::cout << "Equip all index and using them :" << std::endl << std::endl;	

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
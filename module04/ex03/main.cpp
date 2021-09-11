/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:34:35 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 02:51:01 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << FYELLOW << "----- TEST 42 -----" << RESET << std::endl;
	std::cout << std::endl;
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
	
	delete me;
	delete src;

    std::cout << std::endl;
	std::cout << FYELLOW << "----- MY TEST -----" << RESET << std::endl;
	std::cout << std::endl;
	
	IMateriaSource* new_m = new MateriaSource();
	new_m->learnMateria(new Ice());
	new_m->learnMateria(new Cure());
	ICharacter *test = new Character("my_test");

	tmp = new_m->createMateria("cure");
	test->equip(tmp);
	test->use(0, *bob);
	tmp = new_m->createMateria("cure");
	test->equip(tmp);
	test->use(1, *bob);
	tmp = new_m->createMateria("ice");
	test->equip(tmp);
	test->use(2, *bob);
	tmp = new_m->createMateria("ice");
	test->equip(tmp);
	test->use(3, *bob);
	delete test;
	delete bob;
	delete new_m;
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:24:20 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/09 20:18:11 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int		main()
{
	Character *me = new Character ("me");

	std::cout << std::endl;
	std::cout << FYELLOW << "----- TEST 42 -----" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << *me;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

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

	std::cout << std::endl;
	std::cout << FYELLOW << "----- MY TEST -----" << RESET << std::endl;
	std::cout << std::endl;
	Enemy* Alex = new SuperMutant();
	me->equip(pf);
	me->attack(Alex);
	me->attack(Alex);
	std::cout << *me;
	me->attack(Alex);
	me->recoverAP();
	me->attack(Alex);
	me->attack(Alex);
	std::cout << *me;
	
	delete pr;
	delete pf;
	delete me;
	delete Alex;
	delete b;
	return 0; 
	return (0);
}
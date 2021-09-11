/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:33:55 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 02:03:25 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int         main()
{	
    std::cout << std::endl;
	std::cout << FYELLOW << "----- TEST 42 -----" << RESET << std::endl;
	std::cout << std::endl;
    ISpaceMarine    *bob = new TacticalMarine;
    ISpaceMarine    *jim = new AssaultTerminator;

    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine *cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

    std::cout << std::endl;
	std::cout << FYELLOW << "----- MY TEST -----" << RESET << std::endl;
	std::cout << std::endl;
    Squad *soldat = new Squad;
    ISquad *vlc2 = new Squad(*soldat);
    delete soldat;
    bob = new TacticalMarine;
    jim = new AssaultTerminator;
    vlc2->push(jim);
	vlc2->push(bob);
	std::cout << "count: " << vlc2->getCount() << std::endl;
	delete vlc2;
    return (0);
}
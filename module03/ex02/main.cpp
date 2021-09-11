/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:14:29 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/27 23:03:14 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	srand(time(NULL));

	std::cout << FYELLOW << "-----CLAPTRAP TEST-----" << RESET << std::endl;
    FragTrap Bob = FragTrap("Bob");
    FragTrap John = FragTrap("John");
	ScavTrap Alex = ScavTrap("Alex");

    Bob.rangedAttack("Enemy");
    Bob.meleeAttack("Enemy");
    Bob.takeDamage(21);
    Bob.beRepaired(210);

    John.rangedAttack("Enemy");
    John.meleeAttack("Enemy");
    John.takeDamage(420);
    John.beRepaired(42);

    Bob.vaulthunter_dot_exe("Enemy");
    Bob.vaulthunter_dot_exe("Enemy");
    Bob.vaulthunter_dot_exe("Enemy");
    Bob.vaulthunter_dot_exe("Enemy");
    Bob.vaulthunter_dot_exe("Enemy");
    John.vaulthunter_dot_exe("Enemy");

	Alex.rangedAttack("Enemy");
	Alex.meleeAttack("Enemy");
	Alex.takeDamage(42);
	Alex.beRepaired(42);

	Alex.challengeNewcomer("Enemy");
	Alex.challengeNewcomer("Enemy");
	Alex.challengeNewcomer("Enemy");
	Alex.challengeNewcomer("Enemy");
	Alex.challengeNewcomer("Enemy");
	return 0;
}
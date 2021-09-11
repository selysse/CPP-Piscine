/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:14:29 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/27 21:46:16 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	srand(time(NULL));
    FragTrap Bob = FragTrap("Bob");
    FragTrap John = FragTrap("John");

    std::cout << FYELLOW << "-----FRAGTRAP TEST-----" << RESET << std::endl;
    Bob.rangedAttack("Enemy");
    Bob.meleeAttack("Enemy");
    Bob.takeDamage(21);
    Bob.beRepaired(210);
    Bob.rangedAttack("Enemy");

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

	std::cout << FYELLOW << "-----SCAVTRAP TEST-----" << RESET << std::endl;
	ScavTrap Alex = ScavTrap("Alex");
	ScavTrap David = ScavTrap("David");

	Alex.rangedAttack("Enemy");
	Alex.meleeAttack("Enemy");
	Alex.takeDamage(21);
	Alex.beRepaired(210);

	David.rangedAttack("Enemy");
	David.meleeAttack("Enemy");
	David.takeDamage(420);
	David.beRepaired(42);

	Alex.challengeNewcomer("Enemy");
	Alex.challengeNewcomer("Enemy");
	Alex.challengeNewcomer("Enemy");
	Alex.challengeNewcomer("Enemy");
	Alex.challengeNewcomer("Enemy");
	David.challengeNewcomer("Enemy");
	return 0;
}
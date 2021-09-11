/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:20:18 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/27 16:20:54 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int     main()
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
    return 0;
}
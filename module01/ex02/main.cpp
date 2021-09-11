/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 00:05:25 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/14 22:32:34 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int     main(void)
{
    Zombie  *zombie = new Zombie("Alex", "Old zombie");
    zombie->anounce();
    delete zombie;
    ZombieEvent     Zombiland;
    Zombiland.setZombieType("Young Zombie");
	Zombiland.randomChump();
	Zombiland.randomChump();
    Zombie* James(Zombiland.newZombie("James"));
    delete James;
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 00:05:50 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/14 22:34:08 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    srand(time(0));
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie*  ZombieEvent::newZombie(std::string name)
{
    Zombie      *Deadman = new Zombie(name, this->type);
    Deadman->anounce();
    return Deadman;
}

Zombie  ZombieEvent::randomChump(void)
{
    int const         Names(10);
    std::string const names[Names] = {"Alex", "Mike", "Robert", "Bob", "Jane", "Eva", "James", "David", "Markus", "Sadio"};
    Zombie Deadman(names[rand() % Names], this->type);
    Deadman.anounce();
    return Deadman;
}
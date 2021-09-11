/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 22:36:10 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/14 23:35:36 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string randomZombie()
{
	const std::string name[20] = {"Alex", "Mike", "Robert", "Bob", "Jane", "Eva", "James", "David", "Markus", "Sadio",
								"Maria", "Andrea", "Lucas", "Tomas", "Cat", "Peter", "Andre", "Donald", "Frank", "Oskar"};
	return (name[rand() % 20]);
}

ZombieHorde::ZombieHorde(const int n): n(n)
{
	if (n <= 0)
	{
		std::cerr << "Zombies must be 1 or more" << std::endl;
	}
	this->zombies = new Zombie[this->n];
	for (int i = 0; i < this->n; i++)
		zombies[i] = Zombie(randomZombie(), "OldZombie");
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->n; i++)
		zombies[i].anounce();
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:14:14 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/27 23:23:04 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, name) 
{
	std::cout << FGREEN << "SC4V-TP " << _name << " was created." << RESET << std::endl;
}


ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	std::cout << "creation copy of ScavTrap " << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
	this->_hit_points = copy._hit_points;
	this->_max_hit_points = copy._max_hit_points;
	this->_energy_points = copy._energy_points;
	this->_max_energy_points = copy._max_energy_points;
	this->_level = copy._level;
	this->_melee_attack_damage = copy._melee_attack_damage;
	this->_ranged_attack_damage = copy._ranged_attack_damage;
	this->_armor_damage_reduction = copy._armor_damage_reduction;
	this->_name = copy._name;
	return(*this);
}

static const std::string Random[] = {
    "Let's show them what metal we're made of",
    "Get out of my rear bumper!",
    "Someone's grease will be spilled now!",
    "We came to stop you",
    "It doesn't matter what the robot is made of: new parts or spare parts - it can and should shine anyway!",
};

void					ScavTrap::challengeNewcomer(const std::string &target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return ;
	}	
	if (_energy_points < 25)
	{
		std::cout << FRED << "SC4V-TP " << _name << " cannot attack " << target << " because it's out of energy" << RESET << std::endl;
		return ;
	}
	_energy_points -= 25;
	std::string str = Random[rand() % 5];
	std::cout << "SC4V-TP " << _name << " attacks " << target << ": \"" << str << "\"" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << FRED << "SC4V-TP " <<_name << " is dead." << RESET << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:35:29 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/28 19:52:35 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, name)
{
	std::cout << FGREEN << "FR4G-TP " << _name << " was created." << RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "creation copy of FragTrap "  << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy)
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
    "Using thunder attack",
    "Using the magic of Dissem's shackles",
    "Using magic power of the earth!",
    "Using the swirl of blows skill",
    "Using the death strike skill",
};

void					FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return ;
	}	
	if (_energy_points < 25)
	{
		std::cout << FRED << "FR4G-TP " << _name << " cannot attack " << target << " because it's out of energy" << RESET << std::endl;
		return ;
	}
	_energy_points -= 25;
	std::string str = Random[rand() % 5];
	std::cout << "FR4G-TP " << _name << " attacks " << target << ": \"" << str << "\"" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << FRED << "FR4G-TP " <<_name << " is dead." << RESET << std::endl;
}

int FragTrap::get_default_hit_points() const
{
	return (100);
}

int FragTrap::get_default_max_hit_points() const
{
	return (100);
}

int FragTrap::get_default_ranged_attack_damage() const
{
	return (20);
}

int FragTrap::get_default_armor_damage_reduction() const
{
	return (5);
}

int                    FragTrap::meleeAttack(const std::string &target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return (0);
	}
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at melee, causing "  << _melee_attack_damage << " points damage" << std::endl;
	_energy_points -= 5;
	return (1);
}

int					FragTrap::rangedAttack(const std::string &target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return (0);
	}	
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing "  << _ranged_attack_damage << " points damage" << std::endl;
	_energy_points -= 10;
	return (1);

}

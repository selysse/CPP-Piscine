/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:14:14 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/27 23:22:30 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	*this = copy;
	std::cout << "creation copy of ScavTrap " << copy._name << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
	this->_hit_points = copy._hit_points;
	this->_max_hit_points = copy._max_hit_points;
	this->_energy_points = copy._energy_points;
	this->_max_energy_points = copy._max_energy_points;
	this->_level = copy._level;
	this->_name = copy._name;
	this->_melee_attack_damage = copy._melee_attack_damage;
	this->_ranged_attack_damage = copy._ranged_attack_damage;
	this->_armor_damage_reduction = copy._armor_damage_reduction;
	return(*this);
}

static const std::string Random[] = {
    "Let's show them what metal we're made of",
    "Get out of my rear bumper!",
    "Someone's grease will be spilled now!",
    "We came to stop you",
    "It doesn't matter what the robot is made of: new parts or spare parts - it can and should shine anyway!",
};

ScavTrap::ScavTrap(std::string name): _name(name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	std::cout << FGREEN << "SC4V-TP " << _name << " was created." << RESET << std::endl;
}

int ScavTrap::get_hit_points() const
{
	return (this->_hit_points);
}

int ScavTrap::get_max_hit_points() const
{
	return (this->_max_hit_points);
}

int ScavTrap::get_energy_points() const
{
	return (this->_energy_points);
}

int ScavTrap::get_max_energy_points() const
{
	return (this->_max_energy_points);
}

int ScavTrap::get_level() const
{
	return (this->_level);
}

int ScavTrap::get_melee_attack_damage() const
{
	return (this->_melee_attack_damage);
}

int ScavTrap::get_ranged_attack_damage() const
{
	return (this->_ranged_attack_damage);
}

int ScavTrap::get_armor_damage_reduction() const
{
	return (this->_armor_damage_reduction);
}

std::string ScavTrap::get_name() const
{
	return (this->_name);
}

void ScavTrap::set_hit_points(int hit_points)
{
	_hit_points = hit_points;;
}

void ScavTrap::set_max_hit_points(int max_hit_points)
{
	_max_hit_points = max_hit_points;
}

void ScavTrap::set_energy_points(int energy_points)
{
	_energy_points = energy_points;
}

void ScavTrap::set_max_energy_points(int max_energy_points)
{
	_max_energy_points = max_energy_points;
}

void ScavTrap::set_level(int level)
{
	_level = level;
}

void ScavTrap::set_melee_attack_damage (int melee_attack_damage)
{
	_melee_attack_damage = melee_attack_damage;
}

void ScavTrap::set_ranged_attack_damage(int ranged_attack_damage)
{
	_ranged_attack_damage = ranged_attack_damage;
}

void ScavTrap::set_armor_damage_reduction(int armor_damage_reduction)
{
	_armor_damage_reduction = armor_damage_reduction;
}

void ScavTrap::set_name(std::string name)
{
	_name = name;
}

int                    ScavTrap::meleeAttack(const std::string &target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return (0);
	}
	std::cout << "SC4V-TP " << _name << " attacks " << target << " at melee, causing "  << _melee_attack_damage << " points damage" << std::endl;
	_energy_points -= 5;
	return (1);
}

int					ScavTrap::rangedAttack(const std::string &target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return (0);
	}	
	std::cout << "SC4V-TP " << _name << " attacks " << target << " at range, causing "  << _ranged_attack_damage << " points damage" << std::endl;
	_energy_points -= 10;
	return (1);

}

void					ScavTrap::takeDamage(unsigned int amount)
{
	_hit_points -= amount;
	if (_hit_points < 0)
		_hit_points = 0;
	std::cout << "SC4V-TP " << _name << " has taken " << amount << " of damage and has " << _hit_points << " hit points left." << std::endl;
	if (_hit_points == 0)
		std::cout << FRED << _name << " is dead" << RESET << std::endl;
	_melee_attack_damage -= _armor_damage_reduction;
	_ranged_attack_damage -= _armor_damage_reduction;
	if (_melee_attack_damage < 0)
		_melee_attack_damage = 0;
	if (_ranged_attack_damage < 0)
		_ranged_attack_damage = 0;
}

void					ScavTrap::beRepaired(unsigned int amount)
{
	_hit_points += amount;
	if (_hit_points > _max_hit_points)
		_hit_points = _max_hit_points;
	_energy_points = _max_energy_points;
	std::cout << FGREEN << "SC4V-TP " << _name << " has recovered " << amount << " health and has " << _hit_points << " hit points left." << RESET << std::endl;
}

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
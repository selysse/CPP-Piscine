/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:35:29 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/27 23:13:01 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	*this = copy;
	std::cout << "creation copy of FragTrap " << copy._name << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy)
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
    "Using thunder attack",
    "Using the magic of Dissem's shackles",
    "Using magic power of the earth!",
    "Using the swirl of blows skill",
    "Using the death strike skill",
};

FragTrap::FragTrap(std::string name): _name(name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << FGREEN << "FR4G-TP " << _name << " was created." << RESET << std::endl;
}

int FragTrap::get_hit_points() const
{
	return (this->_hit_points);
}

int FragTrap::get_max_hit_points() const
{
	return (this->_max_hit_points);
}

int FragTrap::get_energy_points() const
{
	return (this->_energy_points);
}

int FragTrap::get_max_energy_points() const
{
	return (this->_max_energy_points);
}

int FragTrap::get_level() const
{
	return (this->_level);
}

int FragTrap::get_melee_attack_damage() const
{
	return (this->_melee_attack_damage);
}

int FragTrap::get_ranged_attack_damage() const
{
	return (this->_ranged_attack_damage);
}

int FragTrap::get_armor_damage_reduction() const
{
	return (this->_armor_damage_reduction);
}

std::string FragTrap::get_name() const 
{
	return (this->_name);
}


void FragTrap::set_hit_points(int hit_points)
{
	_hit_points = hit_points;;
}

void FragTrap::set_max_hit_points(int max_hit_points)
{
	_max_hit_points = max_hit_points;
}

void FragTrap::set_energy_points(int energy_points)
{
	_energy_points = energy_points;
}

void FragTrap::set_max_energy_points(int max_energy_points)
{
	_max_energy_points = max_energy_points;
}

void FragTrap::set_level(int level)
{
	_level = level;
}

void FragTrap::set_melee_atack_damage(int melee_attack_damage) {
	_melee_attack_damage = melee_attack_damage;
}

void FragTrap::set_ranged_attack_damage(int ranged_attack_damage) {
	_ranged_attack_damage = ranged_attack_damage;
}

void FragTrap::set_armor_damage_reduction(int armor_damage_reduction) {
	_armor_damage_reduction = armor_damage_reduction;
}

void FragTrap::set_name(std::string name) {
	_name = name;
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

void					FragTrap::takeDamage(unsigned int amount)
{
	_hit_points -= amount;
	if (_hit_points < 0)
		_hit_points = 0;
	std::cout << "FR4G-TP " << _name << " has taken " << amount << " of damage and has " << _hit_points << " hit points left." << std::endl;
	if (_hit_points == 0)
		std::cout << FRED << _name << " is dead" << RESET << std::endl;
	_melee_attack_damage -= _armor_damage_reduction;
	_ranged_attack_damage -= _armor_damage_reduction;
	if (_melee_attack_damage < 0)
		_melee_attack_damage = 0;
	if (_ranged_attack_damage < 0)
		_ranged_attack_damage = 0;
}

void					FragTrap::beRepaired(unsigned int amount)
{
	_hit_points += amount;
	if (_hit_points > _max_hit_points)
		_hit_points = _max_hit_points;
	_energy_points = _max_energy_points;
	std::cout << FGREEN << "FR4G-TP " << _name << " has recovered " << amount << " health and has " << _hit_points << " hit points left." << RESET << std::endl;
}

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
	std::cout << "FR4G-TP " << _name << " attacks " << target << " \"" << str << "\"" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << FRED << "FR4G-TP " <<_name << " is dead." << RESET << std::endl;
}
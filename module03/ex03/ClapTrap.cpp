/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:32:05 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/27 23:26:30 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _hit_points(100),
										_max_hit_points(100),
										_energy_points(50),
										_max_energy_points(50),
										_level(1),
										_melee_attack_damage(30),
										_ranged_attack_damage(20),
										_armor_damage_reduction(5),
										_name(name)
{
	std::cout << "CLAP-9000 for " << _name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(int	hit_points, int max_hit_points, int	energy_points, int max_energy_points, int level, int melee_attack_damage, int ranged_attack_damage, int	armor_damage_reduction, std::string	name ):  
	_hit_points(hit_points),
	_max_hit_points(max_hit_points),
	_energy_points(energy_points),
	_max_energy_points(max_energy_points),
	_level(level),
	_melee_attack_damage(melee_attack_damage),
	_ranged_attack_damage(ranged_attack_damage),
	_armor_damage_reduction(armor_damage_reduction),
	_name(name) 
{
	std::cout << "CLAP-9000 for "<< _name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {

	*this = copy;
	std::cout << "Copy constructor called. Name: " << (this->_name) << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
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


int ClapTrap::get_hit_points() const
{
	return (this->_hit_points);
}

int ClapTrap::get_max_hit_points() const
{
	return (this->_max_hit_points);
}

int ClapTrap::get_energy_points() const
{
	return (this->_energy_points);
}

int ClapTrap::get_max_energy_points() const
{
	return (this->_max_energy_points);
}

int ClapTrap::get_level() const
{
	return (this->_level);
}

int ClapTrap::get_melee_attack_damage() const
{
	return (this->_melee_attack_damage);
}

int ClapTrap::get_ranged_attack_damage() const
{
	return (this->_ranged_attack_damage);
}

int ClapTrap::get_armor_damage_reduction() const {
	return (this->_armor_damage_reduction);
}

std::string ClapTrap::get_name() const
{
	return (this->_name);
}

void ClapTrap::set_hit_points(int hit_points)
{
	_hit_points = hit_points;;
}

void ClapTrap::set_max_hit_points(int max_hit_points)
{
	_max_hit_points = max_hit_points;
}

void ClapTrap::set_energy_points(int energy_points)
{
	_energy_points = energy_points;
}

void ClapTrap::set_max_energy_points(int max_energy_points)
{
	_max_energy_points = max_energy_points;
}

void ClapTrap::set_level(int level) {
	_level = level;
}

void ClapTrap::set_melee_attack_damage(int melee_attack_damage)
{
	_melee_attack_damage = melee_attack_damage;
}

void ClapTrap::set_ranged_attack_damage(int ranged_attack_damage)
{
	_ranged_attack_damage = ranged_attack_damage;
}

void ClapTrap::set_armor_damage_reduction(int armor_damage_reduction) {
	_armor_damage_reduction = armor_damage_reduction;
}

void ClapTrap::set_name(std::string name) {
	_name = name;
}

int                    ClapTrap::meleeAttack(const std::string &target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return (0);
	}
	std::cout << _name << " attacks " << target << " at melee, causing "  << _melee_attack_damage << " points damage" << std::endl;
	_energy_points -= 5;
	return (1);
}

int					ClapTrap::rangedAttack(const std::string &target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return (0);
	}	
	std::cout << _name << " attacks " << target << " at range, causing "  << _ranged_attack_damage << " points damage" << std::endl;
	_energy_points -= 10;
	return (1);

}

void					ClapTrap::takeDamage(unsigned int amount)
{
	_hit_points -= amount;
	if (_hit_points < 0)
		_hit_points = 0;
	std::cout << _name << " has taken " << amount << " of damage and has " << _hit_points << " hit points left." << std::endl;
	if (_hit_points == 0)
		std::cout << FRED << _name << " is dead" << RESET << std::endl;
	_melee_attack_damage -= _armor_damage_reduction;
	_ranged_attack_damage -= _armor_damage_reduction;
	if (_melee_attack_damage < 0)
		_melee_attack_damage = 0;
	if (_ranged_attack_damage < 0)
		_ranged_attack_damage = 0;
}

void					ClapTrap::beRepaired(unsigned int amount)
{
	_hit_points += amount;
	if (_hit_points > _max_hit_points)
		_hit_points = _max_hit_points;
	_energy_points = _max_energy_points;
	std::cout << FGREEN << _name << " has recovered " << amount << " health and has " << _hit_points << " hit points left." << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CLAP-9000 for " << _name << " is dead." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 22:26:25 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/01 16:08:39 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>
#include <string>

SuperTrap::SuperTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	_hit_points = FragTrap::get_default_hit_points();
	_max_energy_points = FragTrap::get_default_max_hit_points();
	_energy_points = NinjaTrap::get_default_energy_points();
	_max_energy_points = NinjaTrap::get_default_max_energy_points();
	_level = 1;
	_melee_attack_damage = NinjaTrap::get_default_melee_attack_damage();
	_ranged_attack_damage = FragTrap::get_default_ranged_attack_damage();
	_armor_damage_reduction= FragTrap::get_default_armor_damage_reduction();
	_name = name;	
	std::cout << FGREEN << "SuperTrap " << _name << " was created." << RESET << std::endl;
}

SuperTrap::SuperTrap( SuperTrap const & copy) : ClapTrap(copy) 
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

SuperTrap::~SuperTrap()
{
	std::cout << FRED << FragTrap::get_name() << " is dead."<< RESET << std::endl;
}

int SuperTrap::rangedAttack(std::string const & target)
{
	return (FragTrap::rangedAttack(target));
}

int SuperTrap::meleeAttack(std::string const & target)
{
	return (NinjaTrap::rangedAttack(target));
}
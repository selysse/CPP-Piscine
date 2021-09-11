/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:57:09 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/01 16:06:55 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

NinjaTrap::NinjaTrap()
{
	std::cout << FGREEN << "Default constructor called" << RESET << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, get_default_energy_points(), get_default_max_energy_points(), 1, get_default_melee_attack_damage(), 5, 0, name)
{
	std::cout << FGREEN << "INAC " << _name << " was created." << RESET << std::endl;
}


NinjaTrap::NinjaTrap(NinjaTrap const &copy) : ClapTrap(copy)
{
	std::cout << "creation copy of NinjaTrap "  << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << FRED << "INAC " <<_name << " is dead." << RESET << std::endl;
}

static const std::string Random[] = {
    ": Forward to great victories! ",
    ": Dead or alive you come with me!.",
    ": Great things await us!",
    ": You know where to find me!",
    ": Great things await us!",
};

int NinjaTrap::rangedAttack(std::string const & target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return (0);
	}
	if (_energy_points < 10) 
	{
		std::cout << FRED << _name << " cannot attack because it's out of energy" << RESET << std::endl;
		return (0);
	}
	std::cout << "INAC " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage!" << std::endl;
	_energy_points -= 10;
	return (1);
}

int NinjaTrap::meleeAttack(std::string const & target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return (0);
	}
	if (_energy_points < 15)
	{
		std::cout << FRED << _name << " cannot attack because it's out of energy" << RESET << std::endl;
		return (0);
	}
	std::cout << "INAC " << _name << " attacks " << target << " at melee, causing " << _ranged_attack_damage << " points of damage!" << std::endl;
	_energy_points -= 15;
	return (1);
}

int NinjaTrap::get_default_energy_points() const
{
	return (120);
}

int NinjaTrap::get_default_max_energy_points() const
{
	return (120);
}

int NinjaTrap::get_default_melee_attack_damage() const
{
	return (60);
}

int NinjaTrap::ninjaShoebox(FragTrap &target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return (0);
	}
	if (_energy_points < 15)
	{
		std::cout << FRED << "INAC " << _name << " cannot attack because it's out of energy" << RESET << std::endl;
		return (0);
	}
	std::string str = Random[rand() % 5];
	std::cout << "INAC " << _name << " attacks FR4G-TP " << target.get_name() << " at range, causing " << 50 << " points of damage!" << std::endl;
	std::cout << _name << str << std::endl;
	_energy_points -= 15;
	return 1;
}

int NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return (0);
	}
	if (_energy_points < 15)
	{
		std::cout << FRED << "INAC " << _name << " cannot attack because it's out of energy" << RESET << std::endl;
		return (0);
	}
	std::string str = Random[rand() % 5];
	std::cout << "INAC " << _name << " attacks " << target.get_name() << " at range, causing " << 50 << " points of damage!" << std::endl;
	std::cout << _name << str << std::endl;
	_energy_points -= 15;
	return 1;
}

int NinjaTrap::ninjaShoebox(ClapTrap & target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return (0);
	}
	if (_energy_points < 15)
	{
		std::cout << FRED << "INAC " << _name << " cannot attack because it's out of energy" << RESET << std::endl;
		return (0);
	}
	std::string str = Random[rand() % 5];
	std::cout << "INAC " << _name << " attacks CLAP-9000 " << target.get_name() << " at range, causing " << 50 << " points of damage!" << std::endl;
	std::cout << _name << str << std::endl;
	_energy_points -= 15;
	return 1;
}

int NinjaTrap::ninjaShoebox(ScavTrap & target)
{
	if (_hit_points == 0)
	{
		std::cout << FRED << _name << "has no hit points left" << RESET << std::endl;
		return (0);
	}
	if (_energy_points < 15)
	{
		std::cout << FRED << "INAC " << _name << " cannot attack because it's out of energy" << RESET << std::endl;
		return (0);
	}
	std::string str = Random[rand() % 5];
	std::cout << "INAC " << _name << " attacks SC4V-TP " << target.get_name() << " at range, causing " << 50 << " points of damage!" << std::endl;
	std::cout << _name << str << std::endl;
	_energy_points -= 15;
	return 1;
}
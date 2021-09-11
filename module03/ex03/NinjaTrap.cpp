/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:57:09 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/01 16:07:03 by gselyse          ###   ########.fr       */
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

NinjaTrap::NinjaTrap(std::string name):ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, name)
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
	std::cout << "INAC " << _name << "attacks FR4G-TP " << target.get_name() << " at range, causing " << 50 << " points of damage!" << std::endl;
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 03:33:24 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/07 19:43:13 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 5, 21)
{
}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy)
{
}

PowerFist	&PowerFist::operator=(PowerFist const &copy)
{
	this->_name = copy.getName();
	this->_apcost = copy.getAPCost();
	this->_damage = copy.getDamage();
	return (*this);
}

PowerFist::~PowerFist()
{
}

void		PowerFist::attack()const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
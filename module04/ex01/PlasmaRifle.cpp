/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 03:33:08 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/07 19:42:56 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon(copy)
{
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &copy)
{
	this->_name = copy.getName();
	this->_apcost = copy.getAPCost();
	this->_damage = copy.getDamage();
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
}

void		PlasmaRifle::attack()const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
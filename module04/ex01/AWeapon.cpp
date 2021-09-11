/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 03:32:37 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/07 19:50:58 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	std::cout << "Default constructor called" << std::endl;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

AWeapon &AWeapon::operator=(const AWeapon &copy)
{
	_name = copy._name;
	_damage = copy._damage;
	_apcost = copy._apcost;
	return (*this);
}

AWeapon::~AWeapon()
{
}

std::string		AWeapon::getName()const
{
	return (_name);
}

int				AWeapon::getAPCost()const
{
	return (_apcost);
}

int				AWeapon::getDamage()const
{
	return (_damage);
}
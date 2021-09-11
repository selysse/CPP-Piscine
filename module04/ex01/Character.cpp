/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:23:56 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/07 19:52:22 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Default constructor called" << std::endl;
}

Character::Character(std::string const &name) : _name(name), _actionPoints(40), _weapon(NULL)
{
}

Character::Character(Character const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Character	&Character::operator=(const Character &copy)
{
	this->_name = copy.get_name();
	this->_actionPoints = copy.get_action_points();
	this->_weapon = copy.get_weapon();
	return (*this);
}

Character::~Character()
{
}

std::string		Character::get_name()const
{
	return (_name);
}

int				Character::get_action_points()const
{
	return (_actionPoints);
}

AWeapon			*Character::get_weapon()const
{
	return (_weapon);
}

std::ostream &operator<<(std::ostream &out, Character const &obj)
{
	if (obj.get_weapon())
		out << obj.get_name() << " has " << obj.get_action_points() << " AP and wields a " << obj.get_weapon()->getName() << std::endl;
	else
		out << obj.get_name() << " has " << obj.get_action_points() << " AP and is unarmed" << std::endl;
	return (out);
}

void			Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void			Character::recoverAP()
{
	_actionPoints += 10;
	if (_actionPoints > 40)
		_actionPoints = 40;
}

void			Character::attack(Enemy *enemy)
{
	if (_actionPoints - _weapon->getAPCost() < 0 || !_weapon)
		return ;
	std::cout << _name << " attacks " << enemy->get_type() << " with a " << _weapon->getName() << std::endl;
	_actionPoints -= _weapon->getAPCost();
	_weapon->attack();
	enemy->takedamage(_weapon->getDamage());
	if (enemy->get_hp() <= 0)
	{
		delete(enemy);
		enemy = NULL;
		return ;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:36:05 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 03:00:46 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string name) : _name(name)
{

	int i = 0;
	while (i < 4)
	{
		_inventory[i] = NULL;
		i++;
	}
}

Character::Character(const Character &copy)
{

	*this = copy;
}

Character	&Character::operator=(const Character &copy)
{
	int i = 0;
	while (i < 4) {
		if (_inventory[i] != NULL)
			delete _inventory[i];
		_inventory[i] = copy._inventory[i]->clone();
	}
	return *this;
}

Character::~Character()
{
	int i = 0;
	while (i < 4) 
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
		i++;
	}
}

int Character::Check(AMateria *m)
{
	int i = 0;
	while (i < 4)
	{
		if (_inventory[i] == m)
			return 1;
		i++;
	}
	return 0;
}

void Character::equip(AMateria* m) {

	if (m == NULL || Check(m)) {
		return ;
	}
	int i = 0;
	while (i < 4)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
		i++;
	}
}

void Character::unequip(int idx) 
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
		return ;
	else
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
		return ;
	else
		_inventory[idx]->use(target);
}

std::string	const & Character::get_name()const
{
	return (_name);
}
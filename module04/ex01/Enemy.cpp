/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 03:34:04 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/07 19:41:54 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(): _hit_points(0), _type("")
{
	std::cout << "Default constructor called" << std::endl;
}

Enemy::Enemy(int hp, std::string const &type): _hit_points(hp), _type(type)
{
}

Enemy::Enemy(Enemy const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Enemy	&Enemy::operator=(Enemy const &copy)
{
	this->_hit_points = copy.get_hp();
	this->_type = copy.get_type();
	return (*this);
}

Enemy::~Enemy()
{
}

std::string		Enemy::get_type()const
{
	return (_type);
}

int				Enemy::get_hp()const
{
	return (_hit_points);
}

void			Enemy::takedamage(int damage)
{
	if (damage > 0)
		_hit_points -= damage;
	if (_hit_points < 0)
		_hit_points = 0;
}
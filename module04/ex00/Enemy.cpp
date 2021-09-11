/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 13:23:23 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/06 20:02:18 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
	std::cout << FGREEN << "Default constructor called" << RESET << std::endl;
}

Enemy::Enemy(std::string name):Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Enemy::Enemy(const Enemy &copy):Victim(copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Enemy &Enemy::operator = (Enemy const &copy)
{
	this->set_name(copy.get_name());
	return (*this);
}

Enemy::~Enemy()
{
	std::cout << "Bleuark..." << std::endl;
}

void Enemy::getPolymorhed() const {

	std::cout << this->get_name() << " has been turned into a pink pony!" << std::endl;
}
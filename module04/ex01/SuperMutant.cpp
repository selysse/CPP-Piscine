/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:22:58 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/07 19:44:06 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy(copy)
{
}

SuperMutant		&SuperMutant::operator=(SuperMutant const &copy)
{
	this->_hit_points = copy.get_hp();
	this->_type = copy.get_type();
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage < 0)
		return ;
	else if (_hit_points - damage < 0)
		_hit_points = 0;
	else
		_hit_points -= damage;
	return ;
}
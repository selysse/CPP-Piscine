/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 00:04:30 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/14 23:25:08 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name, std::string type): name(name), type(type)
{
	std::cout << "Zombie created :" << std::endl;
	std::cout << "Name : " << this->name << std::endl;
	std::cout << "Type : " << this->type << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " is died" << std::endl;
}

void	Zombie::anounce(void)
{
	std::cout << "< " << this->name << " (" << this->type << ")> Braiiiiiiiiiiiiiins ..." << std::endl;
}
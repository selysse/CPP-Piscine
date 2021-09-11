/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:43:35 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/05 13:48:17 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon():_name("")
{
	std::cout << FGREEN << "Default constructor called" << RESET << std::endl;
}

Peon::Peon(std::string name):Victim(name)
{
	std::cout << FYELLOW << "Zog zog." << RESET << std::endl;
}

Peon::Peon(const Peon &copy):Victim(copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Peon &Peon::operator = (Peon const &copy)
{
	this->_name = copy.get_name();
	return (*this);
}

Peon::~Peon()
{
	std::cout << FYELLOW << "Bleuark..." << RESET << std::endl;
}

void Peon::getPolymorphed() const {

	std::cout << this->get_name() << " has been turned into a pink pony!" << std::endl;
}
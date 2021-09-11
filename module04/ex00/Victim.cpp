/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:43:20 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/05 03:26:48 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim():_name("")
{
	std::cout << FGREEN << "Default constructor called" << RESET << std::endl;
}

Victim::Victim(std::string name):_name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Victim	&Victim::operator=(Victim const &copy)
{
	this->_name = copy.get_name();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Victim const &obj)
{
	out << "I am " << obj.get_name() << ", and I like otters!" << std::endl;
	return (out);
}

Victim::~Victim()
{
	std::cout << FRED << "Victim " << this->_name << " just died for no apparent reason!" << RESET << std::endl;
}

std::string Victim::get_name()const
{
	return(_name);
}

void	Victim::set_name(std::string name)
{
	_name = name;
}

void	Victim::getPolymorphed()const
{
	std::cout << this->get_name() << " has been turned into a cute little sheep!" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:42:44 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/05 13:42:27 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer():_name(""), _title("")
{
	std::cout << FGREEN << "Default constructor called" << RESET << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << FGREEN << _name <<", " <<  _title << " is born" << RESET << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Sorcerer 	&Sorcerer::operator=(Sorcerer const &copy ) 
{
	this->_name = copy._name;
	this->_title = copy._title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << FRED << _name << ", " << _title << ", is dead. Consequences will never be the same!" << RESET << std::endl;
}

std::string Sorcerer::get_name()const
{
	return (this->_name);
}

std::string Sorcerer::get_title()const
{
	return (this->_title);
}

void	Sorcerer::set_name(std::string name)
{
	_name = name;
}

void	Sorcerer::set_title(std::string title)
{
	_title = title;
}

void	Sorcerer::polymorph(Victim const &target)const
{
	target.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &obj)
{
	out << "I am " << obj.get_name() << ", " << obj.get_title() << ", and I like ponies!" << std::endl;
	return (out);
}
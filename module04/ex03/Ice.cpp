/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:35:26 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 02:38:11 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &copy) : AMateria("ice")
{
	_xp = copy.get_xp();
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &copy)
{
	_xp = copy.get_xp();
	return *this;
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.get_name() << " *" << std::endl; 
}

std::string const & Ice::get_type() const
{
	return (_type);
}

unsigned int Ice::get_xp() const
{
	return (_xp);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}
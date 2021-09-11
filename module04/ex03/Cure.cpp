/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:35:47 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 02:38:03 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &copy) : AMateria("cure")
{
	_xp = copy.get_xp();
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &copy)
{
	AMateria::operator=(copy);
	return *this;
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.get_name() << "'s wounds *" << std::endl;
}

std::string const & Cure::get_type() const
{
	return (_type);
}

unsigned int Cure::get_xp() const
{
	return (_xp);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

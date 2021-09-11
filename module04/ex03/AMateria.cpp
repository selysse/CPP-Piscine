/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:35:02 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/09 12:50:06 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const &copy)
{
	_type = copy.get_type();
	_xp = copy.get_xp();
}

AMateria	&AMateria::operator=(AMateria const &copy)
{
	_xp = copy._xp;
	_type = copy._type;
	return (*this);
}

AMateria::~AMateria()
{
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}

std::string const &AMateria::get_type()const
{
	return (_type);
}

unsigned int	AMateria::get_xp()const
{
	return (_xp);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:36:50 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 02:34:38 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int i = 0;
	while (i < 4)
	{
		_deposit[i] = NULL;
		i++;
	}
}

MateriaSource::~MateriaSource()
{

	for (int i = 0; i < 4; i++)
	{
		if (_deposit[i] != NULL)
			delete _deposit[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{

	*this = copy;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{

	for (int i = 0; i < 4; i++) {
		if (_deposit[i] != NULL)
			delete _deposit[i];
		_deposit[i] = copy._deposit[i]->clone();
	}

	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{

	if (m == NULL) {
		return ;
	}

	for (int i = 0; i < 4; i++) {
		if (_deposit[i] == NULL) {
			_deposit[i] = m;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_deposit[i]->get_type() == type)
		{
			return _deposit[i]->clone();
		}
	}
	return NULL;
}
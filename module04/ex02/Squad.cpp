/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:28:33 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 01:56:12 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad():_army_size(0), _squad(NULL)
{
    std::cout << "Squad created" << std::endl;
}

Squad::Squad(Squad const &copy)
{
    *this = copy;
}

Squad   &Squad::operator=(const Squad &copy)
{
    if(this != &copy)
    {
        if (_army_size > 0)
            this->destroySquad();
        _squad = new ISpaceMarine*[_army_size];
        _army_size = copy._army_size;
        int i = 0;
        while (i < _army_size)
        {
            _squad[i] = copy.getUnit(i)->clone();
            i++;
        }
    }
    return (*this);
}

Squad::~Squad()
{
    if (_squad != NULL)
        destroySquad();
}

void    Squad::destroySquad()
{
    if (_squad && _army_size)
    {
        int i = 0;
        while (i < _army_size)
        {
            delete _squad[i];
            _squad[i] = NULL;
            i++;
        }
        delete [] _squad;
        _squad = NULL;
        _army_size = 0;
    }
}

int         Squad::InSquad(ISpaceMarine *unit) const
{
    int i = 0;

    while (_squad && i < _army_size)
    {
        if (_squad[i] == unit)
            return (1);
        i++;
    }
    return (0);
}

ISpaceMarine    **Squad::squadCopy(ISpaceMarine **dst) const
{
    int i = 0;

    while (i < _army_size)
    {
        dst[i] = _squad[i];
        i++;
    }
    return (dst);
}

int     Squad::push(ISpaceMarine *new_unit)
{
    if (new_unit && !_squad)
    {
        _squad = new ISpaceMarine*[1];
        _squad[0] = new_unit;
        _army_size++;
    }
    else if (new_unit && !this->InSquad(new_unit))
    {
        ISpaceMarine **tmp = new ISpaceMarine*[_army_size + 1];
        tmp = this->squadCopy(tmp);
        tmp[_army_size] = new_unit;
        delete [] _squad;
        _squad = tmp;
        _army_size++;
    }
    return (_army_size);
}

int     Squad::get_armySize()const
{
    return (_army_size);
}

int     Squad::getCount()const
{
    return (_army_size);
}

ISpaceMarine* Squad::getUnit(int i)const
{
    if (i > _army_size || i < 0)
        return (NULL);
    return (_squad[i]);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:28:38 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/09 02:17:51 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class Squad : public ISquad
{
private:
	int				_army_size;
	ISpaceMarine	**_squad;
public:
	Squad();
	Squad(Squad const &copy);
	Squad &operator=(Squad const &copy);
	virtual ~Squad();

	virtual int					getCount() const;
	virtual ISpaceMarine*		getUnit(int) const;
	virtual int					push(ISpaceMarine*);

	int							InSquad(ISpaceMarine *unit) const;
	ISpaceMarine**				squadCopy(ISpaceMarine** dst) const;
	void						destroySquad();
	int							get_armySize() const;
};

#endif
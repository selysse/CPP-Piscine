/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:28:59 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/07 20:49:04 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class TacticalMarine : public ISpaceMarine
{
private:

public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &copy);
	TacticalMarine &operator=(TacticalMarine const &copy);
	~TacticalMarine();

	virtual ISpaceMarine	*clone() const;
	virtual void			battleCry() const;
	virtual	void			rangedAttack() const;
	virtual	void			meleeAttack() const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 03:32:57 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/07 19:45:57 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_HPP
#define PLASMA_RIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>
#include <string.h>

class PlasmaRifle : public AWeapon
{
	private:

	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &copy);
		PlasmaRifle &operator = (PlasmaRifle const &copy);
		virtual ~PlasmaRifle();

		virtual void		attack()const;
};

#endif
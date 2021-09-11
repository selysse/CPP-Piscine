/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 03:33:36 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/07 19:48:41 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIRST_HPP
#define POWER_FIRST_HPP

#include "AWeapon.hpp"
#include <iostream>
#include <string.h>


class PowerFist : public AWeapon
{
	private:

	public:
		PowerFist();
		PowerFist(PowerFist const &copy);
		PowerFist &operator=(PowerFist const &copy);
		virtual ~PowerFist();

		virtual void		attack() const;
};

#endif
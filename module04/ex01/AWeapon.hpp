/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 03:32:24 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/09 20:15:27 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#define FRED "\033[31m"
#define FGREEN "\033[32m"
#define RESET   "\033[0m"
#define FYELLOW	"\033[33m"
#define FBLUE	"\033[34m"

#include <string>
#include <iostream>

class AWeapon
{
	protected:
		std::string _name;
		int			_apcost;
		int			_damage;

	public:
		AWeapon();
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(AWeapon const &copy);
		AWeapon &operator=(const AWeapon  &copy);
		virtual ~AWeapon();

		std::string	getName()const;
		int	getAPCost()const;
		int	getDamage()const;

		virtual void attack() const = 0;
};

#endif
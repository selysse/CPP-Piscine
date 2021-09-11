/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:24:11 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/07 19:41:45 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"


class Character
{
	private:
		Character();
		std::string 	_name;
		int				_actionPoints;
		AWeapon			*_weapon;

	public:
		Character(std::string const &name);
		Character(Character const &copy);
		Character &operator=(const Character &copy);
		~Character();

		std::string		get_name()const;
		int				get_action_points()const;
		AWeapon			*get_weapon()const;

		void			recoverAP();
		void			equip(AWeapon* weapon);
		void			attack(Enemy* enemy);
};

std::ostream &operator<<(std::ostream &out, Character const &obj);

#endif
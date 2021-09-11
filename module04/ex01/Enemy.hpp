/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 03:34:09 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/07 19:42:07 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
	protected:
		int				_hit_points;
		std::string		_type;

	public:
		Enemy();
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &copy);
		Enemy &operator=(Enemy const &copy);
		virtual ~Enemy();

		std::string		get_type()const;
		int				get_hp()const;

		virtual void	takedamage(int damage);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 13:22:50 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/06 20:02:11 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "Victim.hpp"

class Enemy : public Victim
{
private:
		std::string name;
		Enemy();
public:
		Enemy(std::string name);
		Enemy(Enemy const &copy);
		Enemy &operator=(Enemy const &copy);
		virtual ~Enemy();

		virtual void	getPolymorhed()const;
};


#endif
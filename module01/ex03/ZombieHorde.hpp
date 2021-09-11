/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 22:36:15 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/14 23:25:28 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	int		n;
	Zombie	*zombies;
public:
	ZombieHorde(const int n);
	~ZombieHorde();
	void	announce(void);
};

#endif
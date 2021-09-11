/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 00:05:54 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/14 20:34:57 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
    public:

    ZombieEvent();
    void    setZombieType(std::string type);
    Zombie  *newZombie(std::string name);
    Zombie  randomChump(void);

    private:

    std::string    type;
};

#endif
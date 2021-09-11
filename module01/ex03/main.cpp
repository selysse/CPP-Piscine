/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 00:05:25 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/14 23:34:39 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int     main(void)
{
    int N = 7;
    srand(time(0));
    ZombieHorde zombieHorde(N);
    zombieHorde.announce();
    return 0;
}

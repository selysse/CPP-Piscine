/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:55:51 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/17 01:01:05 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int     main(int ac, char **av)
{
    if (ac == 2)
    {
        std::cout << std::fixed << std::setprecision(1);
        Convert str(av[1]);
        str.to_char();
        str.to_int();
        str.to_float();
        str.to_double();
    }
    else
    {
         std::cerr << "Enter one arguments" << std::endl;
         return (0);
    }
    return (1);
}
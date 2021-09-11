/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 23:24:40 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/16 14:52:01 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak()
{
    std::string *panther = new std::string ("String panther");
    std::cout << *panther << std::endl;
    delete(panther);
}

int     main()
{
    memoryLeak();
    return EXIT_SUCCESS;
}
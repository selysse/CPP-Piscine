/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 22:58:07 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/11 23:15:10 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define RESET   "\033[0m"

int     main()
{
    std::string mystring = "HI THIS IS BRAIN";
    std::string *ptr = &mystring;
    std::string &ref = mystring;

    std::cout << RED << "Pointer:" << ptr << std::endl << RESET;
    std::cout << GREEN << "Ref:" << &ref << std::endl << RESET;
    return (0);
}
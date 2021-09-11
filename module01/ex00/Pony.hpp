/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 23:30:41 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/16 14:49:06 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

#define FRED "\033[31m"
#define FGREEN "\033[32m"
#define RESET   "\033[0m"

class Pony
{
    private:
        std::string Name;
        std::string Color;
        std::string Breed;
        std::string Age;

    public:
        Pony();
        ~Pony(void);
        void Printinfo(void);
};

void    PonyOnTheHeap();
void    PonyOnTheStack();

#endif
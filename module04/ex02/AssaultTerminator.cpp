/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:29:41 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/08 20:54:13 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy)
{
    *this = copy;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &copy)
{
    (void)copy;
    return (*this);
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back..." << std::endl;
}

ISpaceMarine    *AssaultTerminator::clone() const
{
    return(new AssaultTerminator());
}

void        AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void        AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void        AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}
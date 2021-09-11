/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:15:49 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/09 20:21:21 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

#define FRED "\033[31m"
#define FGREEN "\033[32m"
#define RESET   "\033[0m"
#define FYELLOW	"\033[33m"
#define FBLUE	"\033[34m"

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class AssaultTerminator : public ISpaceMarine
{
private:
    
public:
    AssaultTerminator();
    AssaultTerminator(AssaultTerminator const &copy);
    AssaultTerminator &operator=(AssaultTerminator const &copy);
    ~AssaultTerminator();

    virtual         ISpaceMarine *clone() const;
    virtual void    battleCry() const;
    virtual void    rangedAttack() const;
    virtual void    meleeAttack() const;
};

#endif
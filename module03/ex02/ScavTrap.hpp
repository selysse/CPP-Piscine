/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 23:57:04 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/26 13:57:42 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#define FRED "\033[31m"
#define FGREEN "\033[32m"
#define RESET   "\033[0m"

#include "ClapTrap.hpp"

#include <iostream>
#include <string>
#include <cstdlib>

class ScavTrap : public ClapTrap
{
	public:
			ScavTrap();
    		ScavTrap(std::string name);
			ScavTrap(ScavTrap const &copy);
    		~ScavTrap();
			ScavTrap	&operator=(ScavTrap const &copy);

    void	challengeNewcomer(std::string const & target);
};

#endif
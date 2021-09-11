/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 23:54:35 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/27 23:09:00 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#define FRED "\033[31m"
#define FGREEN "\033[32m"
#define RESET   "\033[0m"
#define FYELLOW	"\033[33m"
#define FBLUE	"\033[34m"

#include "ClapTrap.hpp"

#include <iostream>
#include <string>
#include <cstdlib>

class FragTrap : public ClapTrap
{
	public:
				FragTrap();
    			FragTrap(std::string name);
				FragTrap(FragTrap const &copy);
    			~FragTrap();
				FragTrap	&operator=(FragTrap const &copy);

    	void    vaulthunter_dot_exe(std::string const & target);
};

#endif
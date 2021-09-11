/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:56:41 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/26 21:09:36 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#define FRED "\033[31m"
#define FGREEN "\033[32m"
#define RESET   "\033[0m"

#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
			NinjaTrap();
			NinjaTrap(std::string name);
			NinjaTrap(NinjaTrap const &copy);
			NinjaTrap &operator = (NinjaTrap const &copy);
			~NinjaTrap();

			int	ninjaShoebox(FragTrap &target);
			int	ninjaShoebox(ClapTrap &target);
			int	ninjaShoebox(ScavTrap &target);
			int	ninjaShoebox(NinjaTrap &target);
};

#endif
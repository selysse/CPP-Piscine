/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:56:41 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/28 20:30:27 by gselyse          ###   ########.fr       */
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

class NinjaTrap : virtual public ClapTrap
{
	public:
			NinjaTrap();
			NinjaTrap(std::string name);
			NinjaTrap(NinjaTrap const &copy);
			NinjaTrap &operator = (NinjaTrap const &copy);
			~NinjaTrap();

			int rangedAttack(std::string const & target);
			int meleeAttack(std::string const & target);
			
			int get_default_energy_points() const ;
			int get_default_max_energy_points() const ;
			int get_default_melee_attack_damage() const ;

			int	ninjaShoebox(FragTrap &target);
			int	ninjaShoebox(ClapTrap &target);
			int	ninjaShoebox(ScavTrap &target);
			int	ninjaShoebox(NinjaTrap &target);
};

#endif
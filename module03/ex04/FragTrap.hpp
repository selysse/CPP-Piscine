/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 23:54:35 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/28 20:05:50 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#define FRED "\033[31m"
#define FGREEN "\033[32m"
#define RESET   "\033[0m"

#include "ClapTrap.hpp"

#include <iostream>
#include <string>
#include <cstdlib>

class FragTrap : virtual public ClapTrap
{
	public:
			FragTrap();
    		FragTrap(std::string name);
			FragTrap(FragTrap const &copy);
    		~FragTrap();
			FragTrap	&operator=(FragTrap const &copy);


			int get_default_hit_points() const ;
			int get_default_max_hit_points() const ;
			int get_default_ranged_attack_damage() const ;
			int get_default_armor_damage_reduction() const ;
		
			int rangedAttack(std::string const & target);
			int meleeAttack(std::string const & target);
			void vaulthunter_dot_exe(std::string const & target);
};

#endif
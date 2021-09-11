/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:57:04 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/27 17:32:23 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#define FRED "\033[31m"
#define FGREEN "\033[32m"
#define RESET   "\033[0m"
#define FYELLOW	"\033[33m"
#define FBLUE	"\033[34m"

#include <iostream>
#include <string>
#include <cstdlib>

class ScavTrap
{
	private:
    	int         _hit_points;
    	int         _max_hit_points;
    	int         _energy_points;
    	int         _max_energy_points;
    	int         _level;
    	int         _melee_attack_damage;
    	int         _ranged_attack_damage;
    	int         _armor_damage_reduction;
    	std::string _name;

	public:
		ScavTrap();
    	ScavTrap(std::string name);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();
		ScavTrap	&operator=(ScavTrap const &copy);

		int     get_hit_points() const;
		int     get_max_hit_points() const;
		int     get_energy_points() const;
		int     get_max_energy_points() const;
		int     get_level() const;
		int     get_melee_attack_damage() const;
		int     get_ranged_attack_damage() const;
		int     get_armor_damage_reduction() const;
		std::string get_name() const;

		void    set_hit_points(int hit_points);
		void    set_max_hit_points(int max_hit_points);
		void    set_energy_points(int energy_points);
		void    set_max_energy_points(int max_energy_points);
		void    set_level(int level);
		void    set_melee_attack_damage(int melee_attack_damage);
		void    set_ranged_attack_damage(int ranged_attack_damage);
		void    set_armor_damage_reduction(int armor_damage_reduction);
		void    set_name(std::string name);

    	int     rangedAttack(std::string const &target);
    	int     meleeAttack(std::string const &target);
    	void    takeDamage(unsigned int amount);
    	void    beRepaired(unsigned int amount);
    	void	challengeNewcomer(std::string const & target);
};

#endif
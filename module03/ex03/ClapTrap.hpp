/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:31:16 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/27 23:26:54 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#define FRED "\033[31m"
#define FGREEN "\033[32m"
#define RESET   "\033[0m"

#include <iostream>
#include <string>
#include <cstdlib>

class ClapTrap
{
	protected:
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
		ClapTrap();
    	ClapTrap(std::string name);
		ClapTrap(
				int		_hit_points,
				int		_max_hit_points,
				int		_energy_points,
				int		_max_energy_points,
				int		_level,
				int		_melee_attack_damage,
				int		_ranged_attack_damage,
				int		_armor_damage_reduction,
				std::string _name
		);
		ClapTrap(ClapTrap const &copy);
    	~ClapTrap();
		ClapTrap	&operator=(ClapTrap const &copy);

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
};

#endif
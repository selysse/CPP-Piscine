/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 21:55:18 by gselyse           #+#    #+#             */
/*   Updated: 2021/02/28 20:36:16 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class	SuperTrap : public NinjaTrap, public FragTrap 
{
	public:
		SuperTrap();
		SuperTrap(std::string name );
		SuperTrap(SuperTrap const & copy);
		SuperTrap &operator = (SuperTrap const &copy);
		~SuperTrap();
		
		int rangedAttack(std::string const & target);
		int meleeAttack(std::string const & target);
};

#endif
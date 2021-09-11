/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:23:02 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/07 19:49:08 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>
#include <string.h>


class SuperMutant : public Enemy
{
	private:

	public:
		SuperMutant();
		SuperMutant(SuperMutant const &copy);
		SuperMutant &operator=(SuperMutant const &copy);
		~SuperMutant();

		void		takeDamage(int damage);
};

#endif
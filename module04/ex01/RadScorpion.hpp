/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:23:33 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/07 19:46:12 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>
#include <string.h>


class RadScorpion : public Enemy
{
	private:

	public:
		RadScorpion();
		RadScorpion(RadScorpion const &copy);
		RadScorpion &operator=(RadScorpion const &copy);
		~RadScorpion();
};

#endif
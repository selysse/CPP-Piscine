/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:43:45 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/05 13:29:53 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon();
		std::string _name;

	public:
		Peon(std::string name);
		Peon(Peon const &copy);
		Peon &operator = (Peon const &copy);
		virtual ~Peon();
		
		virtual void	getPolymorphed()const; 
};

#endif

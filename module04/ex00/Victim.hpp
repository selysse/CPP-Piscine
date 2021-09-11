/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:43:16 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/05 13:30:23 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#define FRED "\033[31m"
#define FGREEN "\033[32m"
#define RESET   "\033[0m"
#define FYELLOW	"\033[33m"
#define FBLUE	"\033[34m"


#include <iostream>
#include <string.h>

class Victim
{
	private:
		std::string _name;

	public:
		Victim();
		Victim(std::string name);
		Victim(Victim const &copy);
		Victim &operator = (Victim const &copy);
		virtual ~Victim();

		std::string get_name() const;

		void	set_name(std::string name);

		virtual void	getPolymorphed()const;

};

std::ostream &operator << (std:: ostream & out, Victim const &obj);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:42:22 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/05 02:45:00 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#define FRED "\033[31m"
#define FGREEN "\033[32m"
#define RESET   "\033[0m"
#define FYELLOW	"\033[33m"
#define FBLUE	"\033[34m"

#include <iostream>
#include <string>
#include "Peon.hpp"
#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string		_name;
		std::string		_title;
		Sorcerer();

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &copy);
		Sorcerer &operator = (Sorcerer const &copy);
		~Sorcerer();

		std::string get_name()const;
		std::string get_title()const;

		void	set_name(std::string name);
		void	set_title(std::string title);

		void	polymorph(Victim const &target)const;
};

std::ostream &operator << (std:: ostream & out, Sorcerer const &obj);

#endif
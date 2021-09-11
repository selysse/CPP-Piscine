/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:34:51 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/09 12:46:43 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
		AMateria();
	protected:
		std::string _type;
		unsigned int _xp;
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &copy);
		AMateria &operator=(AMateria const &copy);
		virtual ~AMateria();

		std::string const &get_type()const;
		unsigned int get_xp()const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif

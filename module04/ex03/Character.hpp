/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:36:17 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 03:00:14 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#define FRED "\033[31m"
#define FGREEN "\033[32m"
#define RESET   "\033[0m"
#define FYELLOW	"\033[33m"
#define FBLUE	"\033[34m"

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		Character();
		std::string _name;
		AMateria	*_inventory[4];
	
	public:
		Character(std::string name);
		Character(const Character &copy);
		virtual ~Character();
		Character &operator=(const Character &copy);

		std::string const & get_name() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		int		Check(AMateria *m);
};

#endif
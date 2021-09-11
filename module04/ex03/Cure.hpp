/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:35:38 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/09 20:36:16 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	private:

	public:

		Cure();
		Cure(Cure const &copy );
		Cure &operator=(Cure const &copy);
		~Cure();

		std::string const &get_type() const;
		unsigned int get_xp() const; 

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:35:15 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/09 20:38:51 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
class Ice : public AMateria
{
	private:

	public:

		Ice();
		Ice(Ice const &copy);
		Ice &operator=(Ice const &copy);
		virtual ~Ice();

		std::string const &get_type() const;
		unsigned int get_xp() const; 
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);
};
#endif

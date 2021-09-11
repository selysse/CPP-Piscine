/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 20:00:44 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/16 15:13:08 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
#include <string>
#include "Brain.hpp"

class Human{
	private :
		Brain	const brain;
	public :
		Human();
		~Human();
		std::string		identify()const;
		const Brain		&getBrain() const;
};

#endif
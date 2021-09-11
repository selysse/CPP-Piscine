/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 20:00:25 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/16 15:17:09 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(int iq) : iq(iq)
{
	std::cout << "Brain IQ " << this->iq << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is died" << std::endl;
}

std::string Brain::identify()const
{
	char str[20];
	sprintf(str, "%p", this);
	return (std::string(str));
}

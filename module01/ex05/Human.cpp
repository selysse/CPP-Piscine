/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 23:46:59 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/16 15:11:48 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

Human::Human() : brain(130) {}

Human::~Human() {}

std::string Human::identify() const 
{
	return (this->brain.identify());
}

const Brain &Human::getBrain()const
{
	return this->brain;
}
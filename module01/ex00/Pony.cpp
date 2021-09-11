/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 23:30:10 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/13 21:07:55 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	std::string string;
	std::string Params[4] = {"Name: ", "Color: ", "Breed: ", "Age: "};

	for (int i = 0 ; i < 4; i++)
	{
		std::cout << "Input " << Params[i] << std::endl;
		std::getline(std::cin, string);
		if (i == 0)
			this->Name = string;
		else if (i == 1)
			this->Color = string;
		else if (i == 2)
			this->Breed = string;
		else
			this->Age = string;
	}
}

Pony::~Pony()
{
	std::cout << "The Pony died" << std::endl;
}

void	Pony::Printinfo	()
{
	std::cout << "Name : " << this->Name << std::endl << "Color : " << this->Color 
			<< std::endl << "Breed : " << this->Breed << std::endl << "Age : " << this->Age << std::endl;
}
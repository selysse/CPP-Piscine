/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 02:23:38 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/25 15:52:19 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &s):value(s.value)
{
	std::cout << "Copy constructor called." << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return (this->value);
}

Fixed &Fixed::operator=(const Fixed &s)
{
	std::cout << "Assignation operator called." << std::endl;
	this->value = s.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called." << std::endl;
	this->value = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}
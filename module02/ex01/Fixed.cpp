/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 02:27:22 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/25 16:24:57 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &s): value(s.value)
{
	std::cout << "Copy constructor called." << std::endl;
}

Fixed::Fixed(const int value): value(value << Fixed::bits)
{
	std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float value): value(roundf(value * (1 << Fixed::bits)))
{
	std::cout << "Float constructor called." << std::endl;
}

int		Fixed::getRawBits() const
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

float	Fixed::toFloat(void) const
{
	return float(this->value) /(float)(1 << Fixed::bits);
}

int		Fixed::toInt(void) const
{
	return (this->value >> Fixed::bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Fixed &value)
{
	return out << value.toFloat();
}
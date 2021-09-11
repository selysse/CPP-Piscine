/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:13 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/17 18:58:57 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
}

Convert::Convert(Convert &copy)
{
    *this = copy;
}

Convert& Convert::operator=(Convert&copy)
{
    this->_str = copy._str;
    this->_num = copy._num;

    return (*this);
}

Convert::Convert(std::string str) : _str(str)
{
    try 
	{
        if (str.length() == 1 && !isdigit(str[0])) 
		{
            _num = static_cast<double>(str[0]);
        }
        else
            _num = std::stod(str);
    }
	catch (std::exception &e)
	{
        std::cerr << "Invalid input" << std::endl;
		exit(EXIT_FAILURE);
    }
}

Convert::~Convert()
{
}

void    Convert::to_char()
{
    std::cout << "char: ";
    if (isnan(_num))
        std::cout << "impossible";
    else if (!isprint(_num))
        std::cout << "Non displayable";
    else
        std::cout << "'" << static_cast<char>(_num) << "'";
    std::cout << std::endl;
}

void    Convert::to_int()
{
    std::cout << "int: ";
    if (isinf(_num) || isnan(_num))
        std::cout << "impossible";
    else
        std::cout << static_cast<int>(_num);
    std::cout << std::endl;
}

void    Convert::to_float() 
{
    std::cout << "float: ";
    if (floor(_num) == _num && !(isinf(_num)))
        std::cout << _num << "f";
    else
    {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << static_cast<float>(_num) << "f";
    }
    std::cout << std::endl;
}

void    Convert::to_double()
{
    std::cout << "double: ";
    if (floor(_num) == _num && !(isinf(_num)))
        std::cout << _num;
    else
        std::cout << _num;
    std::cout << std::endl;
}

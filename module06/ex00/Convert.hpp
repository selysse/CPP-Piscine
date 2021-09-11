/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:07 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/17 01:00:59 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <exception>
#include <math.h>
#include <iomanip>

class Convert
{
    private:
        std::string _str;
        double      _num;
        
    public:
        Convert();
        Convert(std::string str);
        Convert(Convert &copy);
        Convert& operator=(Convert &copy);
        ~Convert();

        void    to_char();
        void    to_int();
        void    to_float();
        void    to_double();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:13 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/17 21:03:18 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

template<typename type>
void printArray(Array<type> a)
{
    if (!a.size())
        return;
    for (unsigned int i=0;i<a.size();i++)
        std::cout << a[i] << " ";
    std::cout << "\n";
}

int		main(void)
{
	Array<int>	intArrSize(5);
	Array<char>	charArrSize(5);

	try
	{
		std::cout << "int array size: " << intArrSize.size() << std::endl;
		std::cout << "int array [0]: " << intArrSize[0] << std::endl;
		intArrSize[0] = 5;
		std::cout << "int array [0] after changing value: " << intArrSize[0] << std::endl;
		std::cout << "int array [5]: " << intArrSize[5] << std::endl;
	} 
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		std::cout << "char array size: " << charArrSize.size() << std::endl;
		for (size_t i = 0; i < charArrSize.size(); i++) {
			charArrSize[i] = 65 + i;
		}
		std::cout << "char array after changing values: ";
		for (size_t i = 0; i < charArrSize.size(); i++) {
			std::cout << charArrSize[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "char array [7]: " << charArrSize[8] << std::endl;
	} 
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << "array int size 5:\n";
    printArray(intArrSize);
    std::cout << "array char size 5 :\n";
    printArray(charArrSize);
    std::cout << "element array 3 :\n";
    std::cout << intArrSize[2];
    std::cout << "\nexistent element of the int array :\n";
    try
    {
        std::cout << intArrSize[55];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return (0);
}

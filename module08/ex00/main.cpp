/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:13 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/16 14:55:59 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main()
{
	std::cout << std::endl << "--Vector--" << std::endl;
	std::vector<int> vec(9);
	int a = 0;
	for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); ++i)
		*i = a++;
	std::cout << "vector is: ";	
	for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;
	try
	{
		easyfind(vec, 4);
		std::cout << "element 4 is found" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << "element 4: " << e.what() << std::endl;
	}	
	try
	{
		easyfind(vec, 15);
		std::cout << "element 15 is found" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << "element 15 : " << e.what() << std::endl;
	}

	std::cout << std::endl << "--List--" << std::endl;
	std::list<int> list_one;
	list_one.push_back(6895);
	list_one.push_front(5);
	list_one.push_back(56);
	std::cout << "list is: ";	
	for (std::list<int>::iterator i = list_one.begin(); i != list_one.end(); ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;
	try
	{
		easyfind(list_one, 40);
		std::cout << "element 40 is found" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << "element 40: " << e.what() << std::endl;
	}	
	try
	{
		easyfind(list_one, 6895);
		std::cout << "element 6895 is found" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << "element 6895: " << e.what() << std::endl;
	}
	return (0);
}
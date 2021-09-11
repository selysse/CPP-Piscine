/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:13 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/19 02:27:35 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::cout << "-------------- Main tests --------------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "-------------- My tests --------------" << std::endl;
	try
	{
		unsigned int size = 10001;
		std::srand(std::time(NULL));
		int arr[size];
		for (unsigned int i = 0; i < size; i++)
		{
			arr[i] = std::rand();
		}
		Span sp = Span(size);
		sp.addRange(arr, arr + size);
		//sp.printContent();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp.addNumber(10);
	} 
	catch (std::exception &e)
	{
		std::cout << "Can't add a number. " << e.what() << std::endl;
	}
	return 0;
}



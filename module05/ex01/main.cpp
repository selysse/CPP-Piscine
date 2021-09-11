/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:58:15 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 19:32:46 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int		main(void) {

	try 
	{
		Bureaucrat	John("John", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	Alex("Alex", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat	John("John", 150);
	std::cout << John;
	try 
	{
		John.increment();
		std::cout << John;
		John.decrement();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat	Alex("Alex", 1);
	try
	{
		Alex.increment();
	}
	catch (std::exception &ex) 
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << John << Alex;
	
	std::cout << "----TEST FORM----" << std::endl;
	Form	Doc("Doc", 10, 30);
	try
	{
		Form	toohigh("High", 0, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}	
	std::cout << Alex << std::endl;
	std::cout << Doc << std::endl;
	try
	{
		Alex.signForm(Doc);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		John.signForm(Doc);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << Alex << John << std::endl;
	return 0;
}

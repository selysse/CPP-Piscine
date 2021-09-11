/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:07:59 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/12 19:59:48 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base * p)
{
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);
	if (a != NULL)
		std::cout << "pointer - A" << std::endl;
	if (b != NULL)
		std::cout << "pointer - B" << std::endl;
	if (c != NULL)
		std::cout << "pointer - C" << std::endl;
}

void identify_from_reference(Base & p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "reference - A" << std::endl;
	}
	catch(const std::exception& e)
	{
		
	}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "reference - B" << std::endl;
	}
	catch(const std::exception& e)
	{

	}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "reference - C" << std::endl;
	}
	catch(const std::exception& e)
	{

	}

}

int	main()
{
	Base *BB = new B();
	identify_from_pointer(BB);
	identify_from_reference(*BB);
	Base *AA = new A();
	identify_from_pointer(AA);
	identify_from_reference(*AA);
	Base *CC = new C();
	identify_from_pointer(CC);
	identify_from_reference(*CC);
	delete (BB);
	delete (AA);
	delete (CC);
	return (0);
}
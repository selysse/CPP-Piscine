/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 23:30:27 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/13 21:12:02 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	PonyOnTheStack()
{
	Pony	pony;
	std::cout<<"A pony is about to be born on the Stack"<<std::endl;
	pony.Printinfo();
}

void    PonyOnTheHeap()
{
	Pony	*pony;
	pony = new Pony();
	pony->Printinfo();
	delete pony;
}

int		main(void)
{
	std::cout << FRED << "Heap" << std::endl << RESET;
	std::cout<<"A pony is about to be born on the Heap"<<std::endl;
	PonyOnTheHeap();
	std::cout << FGREEN << "Stack" << std::endl << RESET;
	std::cout<<"A pony is about to be born on the Stack"<<std::endl;
	PonyOnTheStack();
	return (0);
}
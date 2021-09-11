/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:13 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/18 19:08:46 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.push(42);
	mstack.push(21);

	std::cout << "top elem: " << mstack.top() << std::endl;
	std::cout << "stack size: " << mstack.size() << std::endl;
	mstack.pop();
	mstack.pop();
	std::cout << "stack size: " << mstack.size() << std::endl;
	mstack.push(23);
	mstack.push(51);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "it: " << *it << std::endl;
	++it;
	std::cout << "++it: " << *it << std::endl;
	--it;
	std::cout << "--it: " << *it << std::endl;
	std::cout << "stack content: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
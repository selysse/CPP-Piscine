/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:13 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/17 20:46:18 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	private:
		int _n;
	public:
		Awesome( void ) : _n(42) 
		{
			return;
		}
		int get(void) const
		{
			return this->_n;
		}
};

std::ostream & operator<<(std::ostream & out, Awesome const &obj)
{
	out << obj.get();
	return out;
}

template< typename T >
void print( T const & x ) 
{
	std::cout << x << std::endl; return;
}

int main() 
{
	std::cout << "---42-TEST---" << std::endl;
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];
	iter(tab, 5, print);
	iter(tab2, 5, print);
	std::cout << std::endl;
	std::cout << "---MY-TEST---" << std::endl;
	double a(3.33);
	double b(5.55);
	double c(4.44);
	double doubleArray[3] = {a, b, c};
	iter(doubleArray, 3, print);
	std::cout << std::endl;
	iter(doubleArray, 3, &increment);
	std::cout << std::endl;
	iter(doubleArray, 3, &decrement);
	std::cout << std::endl;
	return 0;
}
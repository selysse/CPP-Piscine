/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:13 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/17 20:44:59 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome 
{
    private:
	    int _n;

    public:
	    Awesome( int n ) : _n( n )
        {
        }
	    bool operator==(Awesome const &rhs) const
        {
            return (this->_n == rhs._n);
        }
	    bool operator!=(Awesome const &rhs) const
        {
            return (this->_n != rhs._n);
        }
	    bool operator>(Awesome const &rhs) const 
        {
            return (this->_n > rhs._n);
        }
	    bool operator<( Awesome const &rhs ) const
        {
            return (this->_n < rhs._n);
        }
	    bool operator>=( Awesome const &rhs ) const 
        {
            return (this->_n >= rhs._n);
        }
	    bool operator<=( Awesome const &rhs ) const
        {
            return (this->_n <= rhs._n);
        }

	    const int &getN() const
        {
		    return _n;
        }
};

std::ostream &operator<<(std::ostream &out, const Awesome &obj)
{
	out << obj.getN();
	return out;
}

int main()
{
    int i = 2, j = 3;
    std::cout << "i = " << i << "; j = " << j << std::endl;
    ::swap(i, j);
    std::cout << "i = " << i << "; j = " << j << std::endl;
    std::cout << "min(i,j) = " << ::min(i, j) << std::endl;
    std::cout << "max(i,j) = " << ::max(i, j) << std::endl;
    std::cout << std::endl;
    double a = 4.23, b = 12.15;
    std::cout << "a = " << a << "; b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << "; b = " <<b << std::endl;
    std::cout << "min(a,b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a,b) = " << ::max(a, b) << std::endl;
    std::cout << std::endl;
    std::string string_one = "chaine1";
    std::string string_two = "chaine2";
    std::cout << "string_one: " << string_one << std::endl;
    std::cout << "string_two: " << string_two << std::endl;
    ::swap(string_one, string_two);
    std::cout << "string_one: " << string_one << std::endl;
    std::cout << "string_two: " << string_two << std::endl;
    std::cout << "min(string_one, string_two) = " << ::min(string_one, string_two) << std::endl;
    std::cout << "max(string_one, string_two) = " << ::max(string_one, string_two) << std::endl;
    std::cout << std::endl;
    Awesome awesome_one(3), awesome_two(8);
    std::cout << "Awesome_one: " << awesome_one << std::endl;
    std::cout << "Awesome_two: " << awesome_two << std::endl;
    ::swap(awesome_one, awesome_two);
    std::cout << "Awesome_one: " << awesome_one << std::endl;
    std::cout << "Awesome_two: " << awesome_two << std::endl;
    std::cout << "min(awesome_one, awesome_two) = " << ::min(awesome_one, awesome_two) << std::endl;
    std::cout << "max(awesome_one, awesome_two) = " << ::max(awesome_one, awesome_two) << std::endl;
}
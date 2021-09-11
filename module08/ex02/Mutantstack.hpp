/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:13 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/18 19:13:14 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>

template<typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack() : std::stack<T>()
		{
		};
		MutantStack( MutantStack const &copy) : std::stack<T>(copy)
		{
		};
		virtual ~MutantStack()
		{
		};

		MutantStack &operator=(MutantStack const &copy) 
		{
			this->c = copy.c;
			return *this;
		};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator end(void) 
		{
			return (this->c.end());
		}
		iterator begin(void)
		{
			return (this->c.begin());
		}
};

#endif
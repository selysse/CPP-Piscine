/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:13 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/19 16:01:46 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <vector>
# include <sstream>
# include <list>
# include <algorithm>

class notFound : public std::exception
{
	public:
		virtual const char *what() const throw();
};

const char *notFound::what() const throw()
{
	return ("not found");
}

template <typename T>
typename T::const_iterator easyfind(T &obj, int toFind)
{
	typename T::iterator i = std::find(obj.begin(), obj.end(), toFind);
	//std::cout << *i << std::endl;
	if (i == obj.end())
		throw notFound();
	return (typename T::const_iterator(i));
}
#endif
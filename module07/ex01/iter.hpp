/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:13 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/17 01:30:15 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T>
void	decrement(T const &input)
{
	T num;
	num = input;
	num--;
	std::cout << num << " ";
}

template<typename T>
void	increment(T const &input)
{
	T num;
	num = input;
	num++;
	std::cout << num << " ";
}

template <typename T>
void iter(const T *array, size_t size, void (*f)(const T &p)) {
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

#endif
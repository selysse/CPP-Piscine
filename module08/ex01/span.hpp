/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:13 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/17 01:40:36 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>
#include <ctime>

class Span
{
private:
	unsigned int _size;
	std::vector<int> _container;

public:
	Span();
	Span(const unsigned int &size);
	Span(const Span &copy);
	Span &operator=(const Span &copy);
	~Span();

	void addNumber(const int &n);
	void addRange(const int *begin, const int *end);
	void printContent();
	int shortestSpan();
	int longestSpan();

	class NoSpaceException : public std::exception
	{
		const char *what() const throw();
	};

	class NoSpanToFindException : public std::exception
	{
		const char *what() const throw();
	};
};

#endif

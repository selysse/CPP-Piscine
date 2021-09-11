/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:13 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/19 02:27:17 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : _size(0)
{
}

Span::Span(const unsigned int &size)
{
	_size = size;
	return;
}

Span::Span(const Span &copy)
{
	_size = copy._size;
	_container = copy._container;
	return;
}

Span &Span::operator=(const Span &copy)
{
	_size = copy._size;
	_container = copy._container;
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(const int &n)
{
	if (_container.size() == _size)
	{
		throw NoSpaceException();
	}
	_container.push_back(n);
	std::sort(_container.begin(), _container.end());
	return;
}

void Span::addRange(const int *begin, const int *end)
{
	if (end - begin > _size)
		throw NoSpaceException();
	_container.assign(begin, end);
	std::sort(_container.begin(), _container.end());
	return;
}

void Span::printContent()
{
	for (unsigned int i = 0; i < _container.size(); i++)
	{
		std::cout << _container[i] << "-";
	}
	std::cout << "\n";
	std::cout << "size: " << _container.size() << "\n";
}

int Span::shortestSpan()
{
	unsigned int current_size = _container.size();
	if (current_size == 0 || current_size == 1)
		throw NoSpanToFindException();
	std::sort(_container.begin(), _container.end());
	std::vector<int>::iterator i;
	i = _container.begin();
	int min = std::abs(*i - *(i + 1));
	while (++i != _container.end())  
	{
		if (std::abs(*i - *(i - 1)) < min)
			min = std::abs(*i - *(i - 1));
	}
	return min;
}

int Span::longestSpan()
{
	unsigned int current_size = _container.size();
	if (current_size == 0 || current_size == 1)
	{
		throw NoSpanToFindException();
	}
	return _container[current_size - 1] - _container[0];
}

const char *Span::NoSpaceException::what() const throw()
{
	return "Error: no more space";
}

const char *Span::NoSpanToFindException::what() const throw()
{
	return "Error: no span to find";
}
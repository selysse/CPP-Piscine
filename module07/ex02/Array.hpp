/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:56:13 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/17 20:59:50 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
#include <stdlib.h>

template <typename T>
class Array
{
	private:
		T 				*_array;
		unsigned int 	_size;
	public:
		Array();
		Array(unsigned int n);
		virtual ~Array();
	   	Array(const Array &other);

		unsigned int size() const;

		Array &operator=(Array const &other);
		T &operator[](unsigned int i);
		T const &operator[](unsigned int i) const;

		class OutOfBoundException: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
};

template<typename T>
Array<T>::Array() 
{
	_array = NULL;
	_size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n]();
	_size = n;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template<typename T>
Array<T>::Array(const Array &other) {
	*this = other;
}

template<typename T>
Array<T> &Array<T>::operator=(Array const &other){
	if (other._size)
	{
		_array = new T[other._size];
		for (unsigned int i = 0; i < other._size; i++)
			_array[i] = other._array[i];
	}
	_size = other._size;
	return *this;
}

template<typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (!_array || i >= _size)
		throw OutOfBoundException();
	return _array[i];
}

template <typename T>
T const &Array<T>::operator[](unsigned int i) const
{
	if (!_array || i >= _size)
		throw OutOfBoundException();
	return _array[i];
}

template <typename T>
char const *Array<T>::OutOfBoundException::what() const throw()
{
	return "Error: The element is out of bounds";
}

#endif
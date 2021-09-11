/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:35:03 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/16 02:27:32 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void * serialize(void)
{
	static std::string alnum = "0123456789" \
		"abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";
	static size_t size = alnum.size();
	char *raw = new char[8 + 4 + 8];
    size_t i = 0;
	while (i < 8)
	{
		raw[i] = alnum[rand() % size];
		i++;
	}
    *reinterpret_cast<int*>(raw + 8) = rand();
    i = 0;
	while (i < 8)
	{
		raw[8 + 4 + i] = alnum[rand() % size];;
		i++;
	}
    return reinterpret_cast<void*>(raw);
}

Data * deserialize(void * raw)
{
	Data *data = new Data;

	data->str_one = std::string(static_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	data->str_two = std::string(static_cast<char*>(raw) + 8 + 4, 8);
	return (data);
}

int main()
{
	srand(time(NULL));
	void *raw = serialize();
    Data *data = deserialize(raw);
    std::cout << "string_one = " << data->str_one << ", n = " << data->n << ", string_two = " << data->str_two << std::endl;
    delete[] reinterpret_cast<char*>(raw);
    delete data;
	return (0);
}
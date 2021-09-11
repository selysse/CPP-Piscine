/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 02:27:23 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/16 14:46:34 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Please enter 3 arguments: <file> <find> <replace>." <<std::endl;
		return (1);
	}
	std::string file = argv[1];
	std::string find = argv[2];
	std::string replace = argv[3];
	if  (!file.length() || !find.length() || !replace.length())
	{
		std::cerr << "Please enter 3 arguments: <file> <find> <replace>." <<std::endl;
		return (1);
	}
	std::fstream in, out;
	in.open(file.c_str(), std::fstream::in);
	if (!in)
	{
		std::cout << "File does not exists." << std::endl;
		return (1);
	}
	out.open((file + ".replace").c_str(), std::fstream::out);
	if (!out)
	{
		in.close();
		std::cout << "Input/Output Error." << std::endl;
		return (1);
	}
	
	std::string::size_type strslen = find.length();
	char *newstr = new char[strslen];
	std::string::size_type index = 0;
	std::string::size_type len = 0;
	while (!in.eof())
	{
		if (!in.read(&newstr[index], 1))
			break;
		len++;
		if (len == strslen)
		{
			bool found = true;
			for(std::string::size_type i = 0; i < strslen; i++)
			{
				if (newstr[(index + i + 1) % strslen] != find[i])
				{
					found = false;
					break;
				}
			}
			if (found)
			{
				len = 0;
				out << replace;
				index = (index + 1) % strslen;
			}
			else
			{
				out << newstr[(index + 1) % strslen];
				len--;
			}
		}
		index = (index + 1) % strslen;
	}
	while (len > 0)
	{
		out << newstr[(index + 1) % strslen];
		len--;
		index = (index + 1) % strslen;
	}
	in.close();
	out.close();
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 02:14:27 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/10 18:50:13 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char const *argv[])
{
	int i;
	size_t len;
	
	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while(i < argc)
		{
			len = std:: strlen(argv[i]);
			for (size_t j = 0; j < len; j++)
			{
				if (std:: isalpha(argv[i][j]))
					std::cout << (char)std:: toupper(argv[i][j]);
				else
					std::cout << argv[i][j];
			}
			if (len == 1)
				std::cout << ' ';
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}

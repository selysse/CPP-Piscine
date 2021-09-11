/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:51:04 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/10 18:48:22 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void		ft_searchContact(Contact book[], int index)
{
	int 			i;
	int 			a;
	std::string		str;
	std::cout << "  Number  |first name|last name | nickname " << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;
	i = 0;
	
	while (i < 8)
	{
		std::cout << "    " << i + 1 << "     |";
		book[i].searchTable();
		i++;
	}
	std::cout << GREEN << "Select contact number" << std::endl << RESET;
	std::getline(std::cin, str);
	for (int n = 0; str[n] != '\0'; n++)
	{
		if (isdigit(str[n]) == 0)
		{
			std::cout << "Please input a digit between 1-8" << std::endl;
			return;
		}
	}
	a = atoi(&str[0]);
	if (a <= 8 && a > 0 && a <= index)
		book[a-1].ft_print();
	else
		std::cout << "Contact does not exist" << std::endl;
	return;	
}

void	welcome()
{
	std:: cout << GREEN << "-------------------------------" << std::endl << RESET;
	std:: cout << FRED << "***Welcome to the phone book***" << std::endl << RESET;
	std:: cout << GREEN << "-------------------------------" << std::endl << RESET;
	std:: cout << GREEN << "-------------------------------" << std::endl << RESET;
	std:: cout << FRED << "*********USE COMMANDS**********" << std::endl << RESET;
	std:: cout << GREEN << "-------------------------------" << std::endl << RESET;
	std:: cout << GREEN << "-------------------------------" << std::endl << RESET;
	std:: cout << FRED << "**************ADD**************" << std::endl << RESET;
	std:: cout << FRED << "*****input a new contact's*****" << std::endl << RESET;
	std:: cout << GREEN << "-------------------------------" << std::endl << RESET;
	std:: cout << GREEN << "-------------------------------" << std::endl << RESET;
	std:: cout << FRED << "************SEARCH*************" << std::endl << RESET;
	std:: cout << FRED << "*****Displays information******" << std::endl << RESET;
	std:: cout << FRED << "********about contacts*********" << std::endl << RESET;
	std:: cout << GREEN << "-------------------------------" << std::endl << RESET;
	std:: cout << GREEN << "-------------------------------" << std::endl << RESET;
	std:: cout << FRED << "*************EXIT**************" << std::endl << RESET;
	std:: cout << FRED << "******Exiting the program******" << std::endl << RESET;
	std:: cout << GREEN << "-------------------------------" << std::endl << RESET;
}


int     main(void)
{
    Contact   book[8];
    int         i;
    std::string str;

    welcome();
    i = 0;
    while (true)
    {
		std:: cout << "Type EXIT or ADD or SEARCH" << std::endl;
		std::cout << FRED << ">> " << RESET;
        getline(std::cin, str);
        if (str.compare("EXIT") == 0)
            break ;
        else if (str.compare("SEARCH") == 0)
		{
            if (i == 0)
				std::cout << FRED << "Phonebook is empty" << std::endl << RESET;
			else
				ft_searchContact(book, i);
		}
		else if (str.compare("ADD") == 0)
        {
            if (i < 8)
                book[i].ft_addContact(i);
            else
                std::cout << BLUE << "Phonebook is FULL!" << RESET << std::endl;
            i++;
        }
        else
            std::cout << BLUE << "Invalid syntax!!!" << RESET << std::endl;
    }
    return (0);
}

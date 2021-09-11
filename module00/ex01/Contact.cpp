/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 02:16:09 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/09 19:46:33 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void    Contact::ft_addContact(int i)
{
    this->_count = i;
    std::cout << "Add contact " << i + 1 << std::endl;
    std::cout << "What is your name?" << std::endl;
    getline(std::cin, this->_first_name);
    std::cout << "What is your lastname?" << std::endl;
    getline(std::cin, this->_last_name);
    std::cout << "What is your nickname?" << std::endl;
    getline(std::cin, this->_nickname);
    std::cout << "What is your login?" << std::endl;
    getline(std::cin, this->_login);
    std::cout << "What is your postal address?" << std::endl;
    getline(std::cin, this->_postal_address);
    std::cout << "What is your email address?" << std::endl;
    getline(std::cin, this->_email_address);
    std::cout << "What is your phone number?" << std::endl;
    getline(std::cin, this->_phone_number);
    std::cout << "What is your birthday date?" << std::endl;
    getline(std::cin, this->_birthday_date);
    std::cout << "What is your favorite meal?" << std::endl;
    getline(std::cin, this->_favorite_meal);
    std::cout << "What is your underwear color?" << std::endl;
    getline(std::cin, this->_underwear_color);
    std::cout << "What is your darkest secret?" << std::endl;
    getline(std::cin, this->_darkest_secret);
    std::cout << "Contact added." << std::endl;
}

void    Contact::ft_print(void)
{
    std::cout << GREEN;
    std::cout << "Contact number " << this->_count + 1 << ":" << std::endl;
	std::cout << "-----------------" << std::endl;
    std::cout << "Name:\t\t\t" << this->_first_name << std::endl;
    std::cout << "Lastname:\t\t\t" << this->_last_name << std::endl;
    std::cout << "Nickname:\t\t\t" << this->_nickname << std::endl;
    std::cout << "Login:\t\t\t" << this->_login << std::endl;
    std::cout << "Postal address\t\t" << this->_postal_address << std::endl;
    std::cout << "Email address\t\t" << this->_email_address << std::endl;
    std::cout << "Phone number\t\t" << this->_phone_number << std::endl;
    std::cout << "Birthday date\t\t" << this->_birthday_date << std::endl;
    std::cout << "Favorite meal\t\t" << this->_favorite_meal << std::endl;
    std::cout << "Underwear color\t\t" << this->_underwear_color << std::endl;
    std::cout << "Darkest secret\t\t" << this->_darkest_secret << std::endl;
    std::cout << RESET;
}

std::string		Contact::printLine(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str += ".";
	}
	return (str);
}

void			Contact::searchTable(void)
{
	this->_first_name = this->printLine(this->_first_name);
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << this->_first_name << "|";
	this->_last_name = this->printLine(this->_last_name);
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << this->_last_name << "|";
	this->_nickname = this->printLine(this->_nickname);
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << this->_nickname << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:13:42 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/08 16:54:51 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destructor called" << std::endl;
}

int	PhoneBook::_contact_n = 0;

void	PhoneBook::PhoneBook_add()
{
	int	i = _contact_n % 8;
	std::string input;

	std::cout << std::endl;
	std::cout << "First Name: ";
	std::getline (std::cin, input);
	if (std::cin.eof())
		exit(1) ;
	this->_contacts[i].set_elements(input, "_first_name");

	std::cout << "Last Name: ";
	std::getline (std::cin, input);
	if (std::cin.eof())
		exit(1) ;
	this->_contacts[i].set_elements(input, "_last_name");

	std::cout << "Nickname: ";
	std::getline (std::cin, input);
	if (std::cin.eof())
		exit(1) ;
	this->_contacts[i].set_elements(input, "_nickname");

	std::cout << "Phone Number: ";
	std::getline (std::cin, input);
	if (std::cin.eof())
		exit(1) ;
	this->_contacts[i].set_elements(input, "_phone_number");

	std::cout << "Dark Secret: ";
	std::getline (std::cin, input);
	if (std::cin.eof())
		exit(1) ;
	this->_contacts[i].set_elements(input, "_secret");

	_contact_n++;
}

void	PhoneBook::PhoneBook_search()
{
	std::cout << "+---+----------+----------+----------+" << std::endl;
	std::cout << "| N |FIRST NAME|LAST  NAME| NICKNAME |" << std::endl;
	std::cout << "+---+----------+----------+----------+" << std::endl;

	for(int n = 0; n < 8; n++)
	{
		std::cout << "| " << n + 1 << " |";
		
		std::string string = _contacts[n].get_element("_first_name");
		std::cout << string << std::setfill (' ') << std::setw (11 - string.size()) << " |";
		
		string = _contacts[n].get_element("_last_name");
		std::cout << string << std::setfill (' ') << std::setw (11 - string.size()) << " |";

		string = _contacts[n].get_element("_nickname");
		std::cout << string << std::setfill (' ') << std::setw (11 - string.size()) << " |" << std::endl;

		std::cout << "+---+----------+----------+----------+" << std::endl;
	}

}

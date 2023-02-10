/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:13:42 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/10 18:12:25 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

int	PhoneBook::_contact_n = 0;

void	PhoneBook::PhoneBook_add()
{
	int	i = _contact_n % 8;
	std::string input;

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

	std::cout << std::endl;
	_contact_n++;
}

void	PhoneBook::PhoneBook_search()
{
	show_list();
	
	std::string input;
	
	std::cout << std::endl << "Select a contact" << std::endl;
	std::cout << "> ";
	std::getline (std::cin, input);
	if (std::cin.eof())
		exit(1) ;
	std::cout << std::endl;
	
	if (input.size() > 1)
	{
		std::cout << "Invalid Contact" << std::endl << std::endl;
		return ;
	}
	if (isdigit(input[0]))
	{
		int	index = input[0] - 49;
		if (_contacts[index].get_element("_first_name") != "")
			show_contact_info(index);
		else
			std::cout << "Empty Contact" << std::endl << std::endl;
	}
	else
	{
		std::cout << "Invalid Contact" << std::endl << std::endl;
		return ;
	}
}

void	PhoneBook::show_list()
{
	std::cout << "+---+----------+----------+----------+" << std::endl;
	std::cout << "| N |FIRST NAME|LAST  NAME| NICKNAME |" << std::endl;
	std::cout << "+---+----------+----------+----------+" << std::endl;

	for(int n = 0; n < 8; n++)
	{
		std::cout << "| " << n + 1 << " |";
		
		std::string string = _contacts[n].get_element("_first_name");
		if (string.size() > 10)
			print_less(string);
		else
			std::cout << string << std::setfill (' ') << std::setw (11 - string.size()) << "|";
		
		string = _contacts[n].get_element("_last_name");
		if (string.size() > 10)
			print_less(string);
		else
			std::cout << string << std::setfill (' ') << std::setw (11 - string.size()) << "|";

		string = _contacts[n].get_element("_nickname");
		if (string.size() > 10)
			print_less(string);
		else
			std::cout << string << std::setfill (' ') << std::setw (11 - string.size()) << "|";

		std::cout << std::endl << "+---+----------+----------+----------+" << std::endl;
	}
}

void	PhoneBook::show_contact_info(int index)
{
	std::string string = _contacts[index].get_element("_first_name");
	std::cout << "First Name: " << string << std::endl;
	string = _contacts[index].get_element("_last_name");
	std::cout << "Last Name: " << string << std::endl;
	string = _contacts[index].get_element("_nickname");
	std::cout << "Nickname: " << string << std::endl;
	string = _contacts[index].get_element("_phone_number");
	std::cout << "Phone Number: " << string << std::endl;
	string = _contacts[index].get_element("_secret");
	std::cout << "Dark Secret: " << string << std::endl << std::endl;
}

void	PhoneBook::print_less(std::string string)
{
	for(int n = 0; n < 9; n++)
		std::cout << string[n];
	std::cout << ".|";
}
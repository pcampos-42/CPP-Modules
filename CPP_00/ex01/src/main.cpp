/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:42:03 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/08 14:48:09 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook	phonebook;
	
	std::string input;
	while (true)
	{
		std::cout << "Choose an option:" << std::endl;
		std::cout << "ADD, SEARCH or EXIT" << std::endl;
		std::cout << "> ";
		std::getline (std::cin, input);

		for (size_t j = 0; j < input.size(); j++)
			input[j] = toupper(input[j]);

		if (input == "ADD")
			phonebook.PhoneBook_add();
		else if (input == "SEARCH")
			phonebook.PhoneBook_search();
		else if (input == "EXIT" || std::cin.eof())
			return(0) ;
		else
			std::cout << "Invalid input" << std::endl << std::endl;
	}
	return (0);
}
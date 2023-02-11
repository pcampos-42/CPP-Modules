/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:40:37 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/11 15:01:03 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	
	std::string *stringPtr = &string;
	std::string &stringRef = string;

	std::cout << &string << std::endl;
	std::cout << &stringPtr << std::endl;
	std::cout << &stringRef << std::endl;

	std::cout << string << std::endl;
	std::cout << *stringPtr << std::endl;
	std::cout << stringRef << std::endl;
}
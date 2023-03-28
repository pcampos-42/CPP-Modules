/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:20:11 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/28 15:53:48 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
{
	Form papel("Student Council", 10, 100);
	std::cout << papel;

	std::cout << std::endl;

	try {
		Form papel2("Student Council", 188, 100);
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}

	try {
		Form papel3("Student Council", 42, -1);
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;
}
{
	Bureaucrat bur("Estevão", 1);
	Bureaucrat bur2("Estevão", 150);
	Form papel("Student Council", 10, 100);
	
	try {
		bur2.signForm(papel);
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}

	try {
		bur.signForm(papel);
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}
}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:20:11 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/30 14:45:44 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat bur("Teresa", 101);
	Bureaucrat bur2("Estevão", 1);
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
	
	try {
		bur.signForm(papel);
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}
	
	try {
		bur2.signForm(papel);
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}
}
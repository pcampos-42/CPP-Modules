/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:20:11 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/27 14:48:32 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
{
	try {
		Bureaucrat bur("Estevão", 0);
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}

	try {
		Bureaucrat bur("Estevão", 151);
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}

	try {
		Bureaucrat bur("Estevão", 1);
		bur.incrementGrade();
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}
	
	try {
		Bureaucrat bur("Estevão", 150);
		bur.decrementGrade();
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}

}
	std::cout << std::endl;

	Bureaucrat bur("Estevão", 77);

	std::cout << bur;
}
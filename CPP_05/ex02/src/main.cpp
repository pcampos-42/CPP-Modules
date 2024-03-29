/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:20:11 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/13 14:10:39 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat bur("A", 150);
	Bureaucrat bur2("B", 140);
	Bureaucrat bur4("D", 1);
	ShrubberyCreationForm shrub("arvoredo");
	RobotomyRequestForm robo("marvin");
	PresidentialPardonForm pres("Matilde");

	try {
		bur.signForm(shrub);
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}

	try {
		bur4.executeForm(shrub);
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}

	try {
		bur4.signForm(shrub);
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}

	try {
		bur2.executeForm(shrub);
	}
	catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}

	bur4.executeForm(shrub);
	bur4.signForm(robo);
	bur4.executeForm(robo);
	bur4.signForm(pres);
	bur4.executeForm(pres);
}
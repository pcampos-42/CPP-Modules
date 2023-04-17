/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:20:11 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/17 16:23:57 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern jovel;
	AForm* form;
	Bureaucrat bur = Bureaucrat("Big Boss", 1);
	
	try
	{
		form = jovel.makeForm("bambu", "restelo");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		form = jovel.makeForm("Shrub", "restelo");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	form->beSigned(bur);
	form->execute(bur);

	delete form;
}
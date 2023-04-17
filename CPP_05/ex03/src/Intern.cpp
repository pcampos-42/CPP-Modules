/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:19:48 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/17 16:23:25 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	_forms[0] = "Shrub";
	_forms[1] = "Robo";
	_forms[2] = "Pres";
}

Intern::Intern(Intern const& src)
{
	_forms[0] = src._forms[0];
	_forms[1] = src._forms[1];
	_forms[2] = src._forms[2];
}

Intern::~Intern()
{}

Intern& Intern::operator=(Intern const& rhs)
{
	if(this != &rhs)
	{
		this->_forms[0] = rhs._forms[0];
		this->_forms[1] = rhs._forms[1];
		this->_forms[2] = rhs._forms[2];
	}
	return (*this);
}

AForm* Intern::makeForm(std::string type, std::string target)
{
	int i = 0;
	while (i < 3 && _forms[i] != type)
		i++;

	AForm* ret;

	switch (i)
	{
	case 0:
			ret = new ShrubberyCreationForm(target);
		break;
	case 1:
			ret = new RobotomyRequestForm(target);
		break;
	case 2:
			ret = new PresidentialPardonForm(target);
		break;
	default:
			throw WrongFormExeption();
		break;
	}
	return (ret);
}
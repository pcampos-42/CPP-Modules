/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:45:04 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/30 17:00:42 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : AForm(src)
{
	_target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
	if(this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	
}
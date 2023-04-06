/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:51:01 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/06 12:53:40 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Robotomy", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : AForm(src)
{
	_target = src._target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
	if(this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	canExecute(executor);

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
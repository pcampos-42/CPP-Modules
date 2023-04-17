/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:28:50 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/14 12:13:31 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : AForm(src)
{
	_target = src._target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
	if(this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
	{
		std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
		throw (FormNotSigned());
	}
	if (executor.getGrade() > this->getExecGrade())
	{
		std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
		throw (GradeTooLowExeption());
	}

	std::cout << "*DRILL NOISES*" << std::endl;
	std::srand(time(NULL));
	if (std::rand() % 2 == 0)
		std::cout << _target << " was successfully robotomized" << std::endl;
	else
		std::cout << _target << " wasnt robotomized" << std::endl;
}
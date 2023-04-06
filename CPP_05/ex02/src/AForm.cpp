/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:06:06 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/05 16:07:21 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Unnamed"), _signed(false), _sign(150), _exec(150)
{}

AForm::AForm(std::string name, int sign, int exec) : _name(name), _signed(false), _sign(sign), _exec(exec)
{
	if (sign < 1 || exec < 1)
		throw (GradeTooHighExeption());
	if (sign > 150 || exec > 150)
		throw (GradeTooLowExeption());
}

AForm::AForm(AForm const& src) : _name(src._name), _sign(src._sign), _exec(src._exec)
{
	this->_signed = src._signed;
}

AForm::~AForm()
{}

AForm& AForm::operator=(AForm const& rhs)
{
	if(this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

std::string const AForm::getName()
{
	return(this->_name);
}

bool AForm::getSigned()
{
	return(this->_signed);
}

int AForm::getSignGrade()
{
	return(this->_sign);
}

int AForm::getExecGrade()
{
	return(this->_exec);
}

bool AForm::beSigned(Bureaucrat bur)
{
	if(bur.getGrade() > this->_sign)
		return (false);
	this->_signed = true;
	return (true);
}

void AForm::canExecute(Bureaucrat const& bur)
{
	if (_signed == false)
	{
		std::cout << bur.getName() << " couldn't execute " << _name << " because ";
		throw (FormNotSigned());
	}
	if (bur.getGrade() < _exec)
	{
		std::cout << bur.getName() << " couldn't execute " << _name << " because ";
		throw (GradeTooLowExeption());
	}
}

std::ostream & operator<<(std::ostream & output, AForm & src)
{
	if (src.getSigned() == true)
		output << "Form : " << src.getName() << std::endl << "Signed : Yes" << std::endl << "Grade to sign : " << src.getSignGrade() << std::endl << "Grade to execute : " << src.getExecGrade() << std::endl;
	else
		output << "Form : " << src.getName() << std::endl << "Signed : No" << std::endl << "Grade to sign : " << src.getSignGrade() << std::endl << "Grade to execute : " << src.getExecGrade() << std::endl;
	return output;
}
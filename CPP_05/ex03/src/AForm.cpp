/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:06:06 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/14 12:03:01 by pcampos-         ###   ########.fr       */
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

std::string const AForm::getName() const
{
	return(this->_name);
}

bool AForm::getSigned() const
{
	return(this->_signed);
}

int AForm::getSignGrade() const
{
	return(this->_sign);
}

int AForm::getExecGrade() const
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

std::ostream & operator<<(std::ostream & output, AForm & src)
{
	if (src.getSigned() == true)
		output << "Form : " << src.getName() << std::endl << "Signed : Yes" << std::endl << "Grade to sign : " << src.getSignGrade() << std::endl << "Grade to execute : " << src.getExecGrade() << std::endl;
	else
		output << "Form : " << src.getName() << std::endl << "Signed : No" << std::endl << "Grade to sign : " << src.getSignGrade() << std::endl << "Grade to execute : " << src.getExecGrade() << std::endl;
	return output;
}
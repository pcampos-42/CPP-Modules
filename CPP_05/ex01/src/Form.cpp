/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:06:06 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/28 15:47:33 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Unnamed"), _signed(false), _sign(150), _exec(150)
{}

Form::Form(std::string name, int sign, int exec) : _name(name), _signed(false), _sign(sign), _exec(exec)
{
	if (sign < 1 || exec < 1)
		throw (GradeTooHighExeption());
	if (sign > 150 || exec > 150)
		throw (GradeTooLowExeption());
}

Form::Form(Form const& src) : _name(src._name), _sign(src._sign), _exec(src._exec)
{
	this->_signed = src._signed;
}

Form::~Form()
{}

Form& Form::operator=(Form const& rhs)
{
	if(this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

std::string const Form::getName()
{
	return(this->_name);
}

bool Form::getSigned()
{
	return(this->_signed);
}

int Form::getSignGrade()
{
	return(this->_sign);
}

int Form::getExecGrade()
{
	return(this->_exec);
}

void Form::beSigned(Bureaucrat bur)
{
	if(bur.getGrade() > this->_sign)
	{
		bur.signForm(*this);
		throw (GradeTooLowExeption());
	}
	this->_signed = true;
	bur.signForm(*this);
}

std::ostream & operator<<(std::ostream & output, Form & src)
{
	if (src.getSigned() == true)
		output << "Form : " << src.getName() << std::endl << "Signed : Yes" << std::endl << "Grade to sign : " << src.getSignGrade() << std::endl << "Grade to execute : " << src.getExecGrade() << std::endl;
	else
		output << "Form : " << src.getName() << std::endl << "Signed : No" << std::endl << "Grade to sign : " << src.getSignGrade() << std::endl << "Grade to execute : " << src.getExecGrade() << std::endl;
	return output;
}
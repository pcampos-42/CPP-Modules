/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:40:44 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/28 12:32:28 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src._name)
{
	this->_grade = src._grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if(grade <= 1)
		throw (GradeTooHighExeption());
	if(grade >= 150)
		throw (GradeTooLowExeption());
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs)
{
	if(this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return (*this);
}

int Bureaucrat::getGrade()
{
	return(this->_grade);
}

std::string const Bureaucrat::getName()
{
	return(this->_name);
}

void Bureaucrat::incrementGrade()
{
	if(this->_grade <= 1)
		throw (GradeTooHighExeption());
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if(this->_grade >= 150)
		throw (GradeTooLowExeption());
	this->_grade++;
}

std::ostream & operator<<(std::ostream & output, Bureaucrat & src)
{
	output << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return output;
}
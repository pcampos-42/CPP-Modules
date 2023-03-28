/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:55:15 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/28 15:51:05 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
# define FORM

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:

	std::string const _name;
	bool _signed;
	int const _sign;
	int const _exec;
	

public:

	Form();
	Form(std::string name, int sign, int exec);
	Form(Form const& src);
	~Form();

	Form& operator=(Form const& rhs);
	
	std::string const getName();
	bool getSigned();
	int getSignGrade();
	int getExecGrade();

	void beSigned(Bureaucrat bur);

	class GradeTooHighExeption :public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Grade Too High");
		}
	};

	class GradeTooLowExeption :public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Grade Low High");
		}
	};
};

#endif

std::ostream & operator<<(std::ostream & output, Form & src);
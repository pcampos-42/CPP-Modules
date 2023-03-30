/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:55:15 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/30 16:57:10 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM
# define AFORM

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:

	std::string const _name;
	bool _signed;
	int const _sign;
	int const _exec;
	

public:

	AForm();
	AForm(std::string name, int sign, int exec);
	AForm(AForm const& src);
	virtual ~AForm();

	AForm& operator=(AForm const& rhs);
	
	std::string const getName();
	bool getSigned();
	int getSignGrade();
	int getExecGrade();

	bool beSigned(Bureaucrat bur);

	virtual bool execute(Bureaucrat const & executor) const;

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
			return ("Grade Too Low");
		}
	};
};

#endif

std::ostream & operator<<(std::ostream & output, AForm & src);
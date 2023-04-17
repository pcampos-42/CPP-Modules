/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:40:50 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/14 12:06:57 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <string>
#include <iostream>

class AForm;

class Bureaucrat
{
private:
	
	int	_grade;
	std::string	const _name;
	
public:

	Bureaucrat();
	Bureaucrat(Bureaucrat const& src);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	Bureaucrat& operator=(Bureaucrat const& rhs);

	int getGrade() const;
	std::string getName() const;

	void incrementGrade();
	void decrementGrade();

	void signForm(AForm& form);
	void executeForm(AForm const& form);

	class GradeTooHighExeption : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Grade Too High");
		}
	};

	class GradeTooLowExeption : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Grade Too Low");
		}
	};
};

std::ostream & operator<<(std::ostream & output, Bureaucrat & obj);

#endif
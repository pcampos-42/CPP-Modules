/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:20:08 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/17 16:08:21 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN
# define INETRN

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:

	std::string _forms[3];

public:

	Intern();
	Intern(Intern const& src);
	~Intern();

	Intern& operator=(Intern const& rhs);

	AForm* makeForm(std::string type, std::string target);

	class WrongFormExeption : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Not a valid form type");
		}
	};
};

#endif
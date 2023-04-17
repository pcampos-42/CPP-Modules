/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:45:04 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/14 12:10:02 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : AForm(src)
{
	_target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
	if(this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
	
	std::ofstream of_fd;
	of_fd.open((_target + "_shrubbery").c_str());
	if (of_fd.is_open())
	{
		of_fd << "     ###           ###           ###     " << std::endl;
		of_fd << "    #####         #####         #####    " << std::endl;
		of_fd << "  #########     #########     #########  " << std::endl;
		of_fd << " ###########   ###########   ########### " << std::endl;
		of_fd << "  #########     #########     #########  " << std::endl;
		of_fd << "   # }|{ #       # }|{ #       # }|{ #   " << std::endl;
		of_fd << "     }|{           }|{           }|{     " << std::endl;
		of_fd << " ____}|{___________}|{___________}|{_____" << std::endl;
	}
}
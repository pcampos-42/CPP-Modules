/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:45:04 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/06 12:50:28 by pcampos-         ###   ########.fr       */
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

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	canExecute(executor);
	
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:45:07 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/06 15:00:40 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:

	std::string _target;

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const& src);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);

	virtual void execute(Bureaucrat const& executor);
};

#endif
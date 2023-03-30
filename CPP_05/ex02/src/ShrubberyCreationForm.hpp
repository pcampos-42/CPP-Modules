/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:45:07 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/30 16:57:29 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:

	std::string _target;

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const& src);
	~ShrubberyCreationForm();

	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);

	virtual bool execute(Bureaucrat const & executor) const;
};

#endif
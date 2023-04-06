/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:51:06 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/06 13:03:19 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:

	std::string _target;

public:

	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const& src);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(PresidentialPardonForm const& rhs);

	virtual void execute(Bureaucrat const& executor);
};

#endif
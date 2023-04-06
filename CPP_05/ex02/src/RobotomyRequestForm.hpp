/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:28:48 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/06 13:03:24 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:

	std::string _target;

public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& src);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);

	virtual void execute(Bureaucrat const& executor);
};

#endif
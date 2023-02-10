/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:14:14 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/10 18:01:51 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::set_elements(std::string value, std::string option)
{
	if (option == "_first_name")
		_first_name = value;
	if (option == "_last_name")
		_last_name = value;
	if (option == "_nickname")
		_nickname = value;
	if (option == "_phone_number")
		_phone_number = value;
	if (option == "_secret")
		_secret = value;
}

std::string	Contact::get_element(std::string option)
{
	if (option == "_first_name" && _first_name.empty() == false)
		return (_first_name);
	if (option == "_last_name" && _last_name.empty() == false)
		return (_last_name);
	if (option == "_nickname" && _nickname.empty() == false)
		return (_nickname);
	if (option == "_phone_number" && _phone_number.empty() == false)
		return (_phone_number);
	if (option == "_secret" && _secret.empty() == false)
		return (_secret);
	return ("");
}
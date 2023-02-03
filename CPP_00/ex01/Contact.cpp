/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:14:14 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/02 16:09:19 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
	std::cout << "Contatc constructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contatc destructor called" << std::endl;
}
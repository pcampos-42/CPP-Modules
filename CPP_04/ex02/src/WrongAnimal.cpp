/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:42:49 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/14 10:45:49 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src)
{
	this->_type = src._type;
	std::cout << "WrongAnimal Copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return(*this);
}

void	WrongAnimal::makeSound()const
{
	std::cout << "* random Wrong animal noise *" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:15:09 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/15 14:42:12 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal Default constructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const& src)
{
	this->_type = src._type;
	std::cout << "AAnimal Copy constructor called." << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called." << std::endl;
}

AAnimal&	AAnimal::operator=(AAnimal const& rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return(*this);
}

void	AAnimal::makeSound()const
{
	std::cout << "* random animal noise *" << std::endl;
}
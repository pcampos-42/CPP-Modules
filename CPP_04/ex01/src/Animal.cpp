/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:15:09 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/13 11:35:09 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called." << std::endl;
}

Animal::Animal(Animal const& src)
{
	this->_type = src._type;
	std::cout << "Animal Copy constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal&	Animal::operator=(Animal const& rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return(*this);
}

void	Animal::makeSound()const
{
	std::cout << "* random animal noise *" << std::endl;
}
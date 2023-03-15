/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:29:50 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/15 14:41:23 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	_type = "Dog";
	_Brain = new Brain();
	std::cout << "Dog Default constructor called." << std::endl;
}

Dog::Dog(Dog const& src) : AAnimal(src)
{
	this->_type = src._type;
	std::cout << "Dog Copy constructor called." << std::endl;
}

Dog::~Dog()
{
	delete _Brain;
	std::cout << "Dog destructor called." << std::endl;
}

Dog&	Dog::operator=(Dog const& rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return(*this);
}

void	Dog::makeSound()const
{
	std::cout << "Bark!" << std::endl;
}

std::string	Dog::getIdea(int n)
{
	if (n < 0 || n > 99)
		return(_Brain->ideas[rand() % 100]);
	else
		return(_Brain->ideas[n]);
}
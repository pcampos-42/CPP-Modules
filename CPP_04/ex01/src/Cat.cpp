/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:08:23 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/15 14:39:26 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	_Brain = new Brain();
	std::cout << "Cat Default constructor called." << std::endl;
}

Cat::Cat(Cat const& src) : Animal(src)
{
	this->_type = src._type;
	std::cout << "Cat Copy constructor called." << std::endl;
}

Cat::~Cat()
{
	delete _Brain;
	std::cout << "Cat destructor called." << std::endl;
}

Cat&	Cat::operator=(Cat const& rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return(*this);
}

void	Cat::makeSound()const
{
	std::cout << "Meow!" << std::endl;
}

std::string	Cat::getIdea(int n)
{
	if (n < 0 || n > 99)
		return(_Brain->ideas[rand() % 100]);
	else
		return(_Brain->ideas[n]);
}

void	Cat::setIdea(std::string const& str, int n)
{
	if (n < 0 || n > 99)
		return ;
	_Brain->ideas[n] = str;
}
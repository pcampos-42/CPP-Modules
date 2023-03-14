/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:46:24 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/14 10:47:29 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat Default constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const& src) : WrongAnimal(src)
{
	this->_type = src._type;
	std::cout << "WrongCat Copy constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return(*this);
}

void	WrongCat::makeSound()const
{
	std::cout << "Wrong Meow!" << std::endl;
}
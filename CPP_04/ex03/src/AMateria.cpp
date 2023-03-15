/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:21:59 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/15 16:09:43 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(AMateria const& src)
{
	this->_type = src._type;
}

AMateria::AMateria(std::string const& type)
{
	this->_type = type;
}

AMateria::~AMateria()
{}

AMateria& AMateria::operator=(AMateria const& rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string const& AMateria::getType() const
{
	return(_type);
}

AMateria* AMateria::clone() const
{
	AMateria* ret = new AMateria();
	return(ret);
}

void AMateria::use(ICharacter& target)
{
	std::cout << _type << " was used on " << target << std::endl;
}
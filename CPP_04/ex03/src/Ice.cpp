/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:55:18 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/17 14:50:29 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(Ice const& src) : AMateria(src)
{}

Ice::~Ice()
{}

Ice& Ice::operator=(Ice const& rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return(new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
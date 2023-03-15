/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:55:18 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/15 16:08:52 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
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
	AMateria* ret = new Ice();
	return(ret);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Heal.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:03:03 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/15 16:09:23 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Heal.hpp"

Heal::Heal() : AMateria("Heal")
{}

Heal::Heal(Heal const& src) : AMateria(src)
{}

Heal::~Heal()
{}

Heal& Heal::operator=(Heal const& rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

AMateria* Heal::clone() const
{
	AMateria* ret = new Heal();
	return(ret);
}

void Heal::use(ICharacter& target)
{
	std::cout << "* heals " << target << "’s wounds *" << std::endl;
}
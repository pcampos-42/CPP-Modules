/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Heal.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:03:03 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/17 14:50:34 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Heal.hpp"

Heal::Heal() : AMateria("heal")
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
	return(new Heal());
}

void Heal::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
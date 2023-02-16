/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:12:12 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/14 11:21:01 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type) : _type(weapon_type)
{
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

std::string	Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string const& new_type)
{
	this->_type = new_type;
}
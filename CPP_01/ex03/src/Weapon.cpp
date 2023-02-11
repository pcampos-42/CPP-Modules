/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:12:12 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/11 16:08:05 by pcampos-         ###   ########.fr       */
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

void	Weapon::setType(std::string new_type)
{
	_type = new_type;
}
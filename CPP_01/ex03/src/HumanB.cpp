/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:12:07 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/14 11:31:01 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
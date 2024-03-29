/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:50:47 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/17 14:40:27 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_inv[0] = NULL;
	this->_inv[1] = NULL;
	this->_inv[2] = NULL;
	this->_inv[3] = NULL;
}

Character::Character(std::string const& name)
{
	_name = name;
	this->_inv[0] = NULL;
	this->_inv[1] = NULL;
	this->_inv[2] = NULL;
	this->_inv[3] = NULL;
}

Character::Character(Character const& src)
{
	this->_name = src._name;
	this->_inv[0] = src._inv[0];
	this->_inv[1] = src._inv[1];
	this->_inv[2] = src._inv[2];
	this->_inv[3] = src._inv[3];
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_inv[i] != NULL)
		{
			delete this->_inv[i];
		}
	}
}

Character& Character::operator=(Character const& rhs)
{
	if(this != &rhs)
	{
		this->_name = rhs._name;
		this->_inv[0] = rhs._inv[0];
		this->_inv[1] = rhs._inv[1];
		this->_inv[2] = rhs._inv[2];
		this->_inv[3] = rhs._inv[3];
	}
	return (*this);
}

std::string const& Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_inv[i] == NULL)
		{
			this->_inv[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	this->_inv[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_inv[idx] != NULL)
	{
		this->_inv[idx]->use(target);
	}
}
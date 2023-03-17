/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:01:29 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/17 14:50:01 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->_inv[0] = NULL;
	this->_inv[1] = NULL;
	this->_inv[2] = NULL;
	this->_inv[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& src)
{
	this->_inv[0] = src._inv[0];
	this->_inv[1] = src._inv[1];
	this->_inv[2] = src._inv[2];
	this->_inv[3] = src._inv[3];
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_inv[i] != NULL)
		{
			delete this->_inv[i];
		}
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const& rhs)
{
	if (this != &rhs)
	{
		this->_inv[0] = rhs._inv[0];
		this->_inv[1] = rhs._inv[1];
		this->_inv[2] = rhs._inv[2];
		this->_inv[3] = rhs._inv[3];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
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

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_inv[i] != NULL)
		{
			if(_inv[i]->getType() == type)
				return(_inv[i]->clone());
		}
	}
	return (0);
}
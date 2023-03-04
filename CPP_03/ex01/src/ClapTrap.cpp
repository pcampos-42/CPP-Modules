/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:35:01 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/04 15:00:31 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hp = 10;
	_ep = 10;
	_ad = 0;
	
	std::cout << "ClapTrap unit " << _name << " created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	*this = src;
	std::cout << "ClapTrap unit " << _name << " copy created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap unit " << _name << " destroyed" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hp = rhs._hp;
		this->_ep = rhs._ep;
		this->_ad = rhs._ad;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if(this->_hp < 0 || this->_ep < 0)
		return ;
		
	this->_ep--;
	std::cout << "ClapTrap unit " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hp -= amount;

	if(this->_hp > 0)
		std::cout << "ClapTrap unit " << this->_name << "has taken " << amount << " points of damage!" << std::endl;
	else
		std::cout << "ClapTrap unit " << this->_name << "has taken lethal amount of damage and died!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_hp < 0 || this->_ep < 0)
		return ;

	this->_ep--;
	this->_hp += amount;
	std::cout << "ClapTrap unit " << this->_name << " recovered " << amount << " health points!" << std::endl;
}
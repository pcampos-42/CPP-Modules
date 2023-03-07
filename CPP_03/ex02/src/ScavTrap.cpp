/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:07:10 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/06 15:30:12 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default construct called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 50;
	_ad = 20;
	
	std::cout << "ScavTrap unit " << _name << " created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src)
{
	*this = src;
	std::cout << "ScavTrap unit " << _name << " copy created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap unit " << _name << " destroyed" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs)
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

void ScavTrap::attack(const std::string& target)
{
	if(this->_hp < 0 || this->_ep < 0)
		return ;
		
	this->_ep--;
	std::cout << "ScavTrap unit " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap unit " << _name << " is in Gate Keeper mode." << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:34:52 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/06 15:39:18 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default construct called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	
	std::cout << "FragTrap unit " << _name << " created" << std::endl;
}

FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src)
{
	*this = src;
	std::cout << "FragTrap unit " << _name << " copy created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap unit " << _name << " destroyed" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs)
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap unit " << _name << " requeste a high-five." << std::endl;
}
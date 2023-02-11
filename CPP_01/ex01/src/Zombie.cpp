/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:23:02 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/11 14:36:45 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

std::string	Zombie::default_name = "someone";

Zombie::Zombie() : _name(default_name)
{
	std::cout << _name << " is amongus." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name << " is amongus." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " was ejected. He was not the imposter" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:14:57 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/16 12:03:45 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	funcs[0].name = "DEBUG";
	funcs[0].func = &Harl::debug;
	funcs[1].name = "INFO";
	funcs[1].func = &Harl::info;
	funcs[2].name = "WARNING";
	funcs[2].func = &Harl::warning;
	funcs[3].name = "ERROR";
	funcs[3].func = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::debug() const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info() const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning() const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error() const
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
		if (this->funcs[i].name == level)
			(this->*funcs[i].func)();
}
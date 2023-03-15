/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:50:56 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/15 13:06:13 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::ifstream	input;
	input.open("ideas.txt");
	for(int i = 0; i < 99; i++)
		getline(input, ideas[i]);
	input.close();
	std::cout << "Brain Default constructor called." << std::endl;
}

Brain::Brain(Brain const& src)
{
	*this = src;
	std::cout << "Brain Copy constructor called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain&	Brain::operator=(Brain const& rhs)
{
	if(this != &rhs)
		for(int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	return(*this);
}
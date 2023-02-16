/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:12:44 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/16 12:47:33 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	Karen;
	std::string	level;

	if(ac != 2)
	{
		std::cout << "The correct way to use the program is: ./harlFilter [arg1]" << std::endl;
		return (1);
	}

	level = av[1];
	for (size_t j = 0; j < level.size(); j++)
			level[j] = toupper(level[j]);
			
	Karen.complain(level);
	return (0);
}
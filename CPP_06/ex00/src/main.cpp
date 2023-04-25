/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:11:35 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/25 15:06:39 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cout << "correct usage of program: \"./a.out argument\"" << std::endl;
		return (0);
	}
	ScalarConverter converter;
	std::string str(av[1]);
	converter.convert(str);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:46:11 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/15 16:18:35 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Array<Bureaucrat> office1(10);
	Array<Bureaucrat> office2(office1);

	Bureaucrat bur1("antonio", 1);
	office1[0] = bur1;
	for(int i = 0; i < office1.size(); i++)
		std::cout << office1[i] << std::endl;
	std::cout << std::endl << std::endl;
	for(int i = 0; i < office2.size(); i++)
		std::cout << office2[i] << std::endl;
	std::cout << std::endl << std::endl;
	try
	{
		std::cout << office1[office1.size()] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Index out of bounds" << std::endl;
	}
}
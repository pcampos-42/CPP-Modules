/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:27:47 by pcampos-          #+#    #+#             */
/*   Updated: 2023/06/01 18:40:47 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(int ac,  char** av)
{
	if (ac < 2)
	{
		std::cout << "Bad Input" << std::endl;
		return (0);
	}
	
	std::vector<int> V;
	std::list<int> L;
	int n;

	for (int i = 1; i < ac - 1; i++)
	{
		for(size_t j = 0; j < strlen(av[i]); j++)
		{
			if(!isdigit(av[i][j]))
			{
				if((av[i][j] == '+' || av[i][j] == '-') && j == 0)
				{
					std::cout << "Error: all arguments must be numbers" << std::endl;
					return (0);
				}
			}
		}
		n = atoi(av[i]);
		if (n < 0)
		{
			std::cout << "Error: all numbers must be positive" << std::endl;
			return (0);
		}
		V.push_back(n);
		L.push_back(n);
	}

	PmergeMe merger(V, L);
	merger.sort("vector");
	merger.sort("list");
}
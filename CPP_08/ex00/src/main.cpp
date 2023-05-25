/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:27:47 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/16 17:56:33 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

void	test(std::vector<int> myvector, int search)
{
	try
	{
		std::vector<int>::iterator i = easyfind(myvector, search);
		std::cout << *i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main()
{
	std::vector<int> myvector;
	for (int i=1; i<=5; i++) myvector.push_back(i);

	test(myvector, 3);
	test(myvector, 10);
}
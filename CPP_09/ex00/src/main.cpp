/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:27:47 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/31 16:41:41 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinEchange.hpp"

void	fill_map(std::map<std::string,float> &map, std::string database)
{
	std::string	line;
	std::string	key;
	float	value;

	std::ifstream	file;
	file.open(database.c_str());
	if (file.is_open())
	{
		getline(file, line);
		while (getline(file, line))
		{
			key = line.substr(0 ,line.find(','));
			std::string tmp = line.substr(line.find(',') + 1);
			value = atof(tmp.c_str());
			map.insert(std::pair<std::string,float>(key, value));
		}
		file.close();
	}
}

int	main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cout << "You need to give one and only one input file to use this program." << std::endl;
		return (0);
	}
	std::map<std::string,float> data;

	fill_map(data, "data.csv");

	BitcoinEchange bit;

	bit.doEchange(av[1], data);
}
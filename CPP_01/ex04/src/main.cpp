/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:35:20 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/16 11:12:13 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	fill_new_file(std::ifstream &if_fd, std::ofstream &of_fd, std::string s1, std::string s2)
{
	std::string buff;
	size_t	i;
	
	std::getline(if_fd, buff, '\0');
	
	
	i = buff.find(s1);
	while (i != std::string::npos)
	{
		buff.erase(i, s1.length());
		buff.insert(i, s2);
		
		i = buff.find(s1);
	}
	
	of_fd << buff;
	
	if_fd.close();
	of_fd.close();
}


int main(int ac, char **av)
{
	std::ifstream if_fd;
	std::ofstream of_fd;
	std::string original_fd, s1, s2;

	if(ac != 4)
	{
		std::cerr << "Wrong usage of program. Arguments must be <filename> <string 1> <string 2>" << std::endl;
		return (1);
	}
	
	original_fd.assign(av[1]);
	s1.assign(av[2]);
	s2.assign(av[3]);

	if_fd.open(original_fd.c_str());
	if (if_fd.is_open() == false)
	{
		std::cerr << "Error opening file" << std::endl;
		return (1);
	}
	
	of_fd.open((original_fd + ".replace").c_str());
	if (of_fd.is_open() == false)
	{
		std::cerr << "Error opening file" << std::endl;
		return (1);
	}
	
	fill_new_file(if_fd, of_fd, s1, s2);
	
	return(0);
}
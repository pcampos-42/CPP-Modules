/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:30:04 by pcampos-          #+#    #+#             */
/*   Updated: 2023/06/01 18:43:49 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe::PmergeMe(PmergeMe const &src)
{
	this->_contL = src._contL;
	this->_contV = src._contV;
}

PmergeMe::PmergeMe(std::vector<int> V, std::list<int> L)
{
	this->_contL = L;
	this->_contV = V;
}

PmergeMe::~PmergeMe()
{}

PmergeMe& PmergeMe::operator=(PmergeMe const &rhs)
{
	if(this != &rhs)
	{
		this->_contL = rhs._contL;
		this->_contV = rhs._contV;
	}
	return (*this);
}

void PmergeMe::sort(std::string cont)
{
	int n = 0;

	if (cont == "vector")
		n = 1;
	else if (cont == "list")
		n = 2;
		
	struct timeval begin;
	gettimeofday(&begin, NULL);
	
	switch (n)
	{
	case 1:
		
		break;
	case 2:
		/* code */
		break;
	default:
		std::cout << "Select the correct conteiner to use." << std::endl;
		return ;
		break;
	}
	
	struct timeval end;
	gettimeofday(&end, NULL);

	std::cout << "Time to process elements with std::" << cont << " => " << end.tv_usec - begin.tv_usec << " microseconds."<< std::endl;
}
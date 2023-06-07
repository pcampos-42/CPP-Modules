/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:30:04 by pcampos-          #+#    #+#             */
/*   Updated: 2023/06/07 14:43:59 by pcampos-         ###   ########.fr       */
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
	this->_n = _contV.size();
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

void PmergeMe::sort_v()
{
	struct timeval begin;
	gettimeofday(&begin, NULL);

	_contV = mergesort_v(_contV.begin(), _contV.end());

	struct timeval end;
	gettimeofday(&end, NULL);

	std::cout << "After:";
	for (std::vector<int>::iterator it = _contV.begin(); it != _contV.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;
	std::cout << "Time to process elements with std::vector => " << end.tv_usec - begin.tv_usec << " microseconds.";
}

std::vector<int> PmergeMe::mergesort_v(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int> final_vector;
	std::vector<int> v1;
	std::vector<int> v2;

	final_vector.assign(begin, end);
	if (final_vector.size() <= 2)
	{
		insertsort_v(final_vector);
		return (final_vector);
	}
	std::vector<int>::iterator halfway = final_vector.begin();
	for (size_t i = 0; i < final_vector.size()/2; i++)
		halfway++;
	v1 = mergesort_v(final_vector.begin(), halfway);
	v2 = mergesort_v(halfway, final_vector.end());
	std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), final_vector.begin());
	return (final_vector);
}

void PmergeMe::insertsort_v(std::vector<int> &vector)
{
	if (vector.size() <= 1)
		return ;
	if (vector.size() == 2)
		if (vector[0] > vector[1])
			std::swap(vector[0], vector[1]);
}

void PmergeMe::sort_l()
{
	struct timeval begin;
	gettimeofday(&begin, NULL);

	_contL = mergesort_l(_contL.begin(), _contL.end());

	struct timeval end;
	gettimeofday(&end, NULL);

	std::cout << std::endl;
	std::cout << "Time to process elements with std::list => " << end.tv_usec - begin.tv_usec << " microseconds." << std::endl;
}

std::list<int> PmergeMe::mergesort_l(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	std::list<int> final_list;
	std::list<int> l1;
	std::list<int> l2;

	final_list.assign(begin, end);
	if (final_list.size() <= 2)
	{
		insertsort_l(final_list);
		return (final_list);
	}
	std::list<int>::iterator halfway = final_list.begin();
	for (size_t i = 0; i < final_list.size()/2; i++)
		halfway++;
	l1 = mergesort_l(final_list.begin(), halfway);
	l2 = mergesort_l(halfway, final_list.end());
	std::merge(l1.begin(), l1.end(), l2.begin(), l2.end(), final_list.begin());
	return (final_list);
}

void PmergeMe::insertsort_l(std::list<int> &list)
{
	if (list.size() <= 1)
		return ;
	if (list.size() == 2)
		list.sort();
}

void PmergeMe::sort()
{
	std::cout << "Before:";
	for (std::vector<int>::iterator it = _contV.begin(); it != _contV.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;

	sort_v();
	sort_l();
}
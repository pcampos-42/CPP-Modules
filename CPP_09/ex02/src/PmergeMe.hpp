/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:30:12 by pcampos-          #+#    #+#             */
/*   Updated: 2023/06/07 14:32:23 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME
# define PMERGEME

# include <iostream>
# include <vector>
# include <list>
# include <algorithm>
# include <sys/time.h>

class PmergeMe
{
private:

	std::vector<int> _contV;
	std::list<int> _contL;
	size_t	_n;
	
	void sort_v();
	std::vector<int> mergesort_v(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	void insertsort_v(std::vector<int> &vector);

	void sort_l();
	std::list<int> mergesort_l(std::list<int>::iterator begin, std::list<int>::iterator end);
	void insertsort_l(std::list<int> &list);

public:

	PmergeMe();
	PmergeMe(PmergeMe const &src);
	PmergeMe(std::vector<int> V, std::list<int> L);
	~PmergeMe();

	PmergeMe& operator=(PmergeMe const &rhs);

	void sort();
};

#endif
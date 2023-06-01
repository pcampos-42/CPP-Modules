/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:30:12 by pcampos-          #+#    #+#             */
/*   Updated: 2023/06/01 18:36:00 by pcampos-         ###   ########.fr       */
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
	

public:

	PmergeMe();
	PmergeMe(PmergeMe const &src);
	PmergeMe(std::vector<int> V, std::list<int> L);
	~PmergeMe();

	PmergeMe& operator=(PmergeMe const &rhs);

	void	sort(std::string cont);

};

#endif
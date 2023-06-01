/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:40:49 by pcampos-          #+#    #+#             */
/*   Updated: 2023/06/01 12:53:39 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <iostream>
# include <string>
# include <algorithm>

class RPN
{
private:

	std::stack<int> _stack;
	std::string _expression;
	
	RPN();
	RPN(RPN const &src);
	RPN& operator=(RPN const &rhs);

	void	make_calc(size_t i);

public:

	RPN(std::string expression);
	~RPN();

	void	calculate();
};


#endif
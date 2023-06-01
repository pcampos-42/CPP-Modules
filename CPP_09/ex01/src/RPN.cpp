/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:40:40 by pcampos-          #+#    #+#             */
/*   Updated: 2023/06/01 13:09:35 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{}

RPN::RPN(RPN const &src)
{
	this->_expression = src._expression;
	this->_stack = src._stack;
}

RPN::RPN(std::string expression) : _expression(expression)
{}

RPN::~RPN()
{}

RPN& RPN::operator=(RPN const &rhs)
{
	if(this != &rhs)
	{
		this->_expression = rhs._expression;
		this->_stack = rhs._stack;
	}
	return (*this);
}

void RPN::make_calc(size_t i)
{
	if(_stack.size() < 2)
		return ;
	int n2 = _stack.top();
	_stack.pop();
	int n1 = _stack.top();
	_stack.pop();
	switch (_expression[i])
	{
	case '+':
		_stack.push(n1 + n2);
		break;
	case '-':
		_stack.push(n1 - n2);
		break;
	case '*':
		_stack.push(n1 * n2);
		break;
	case '/':
		_stack.push(n1 / n2);
		break;
	default:
		break;
	}
}

void RPN::calculate()
{
	for (size_t i = 0; i < _expression.size(); i++)
	{
		if(_expression[i] >= '0' && _expression[i] <= '9')
			_stack.push(_expression[i] - '0');
		else if(_expression[i] == '+' || _expression[i] == '-' || _expression[i] == '*' || _expression[i] == '/')
			make_calc(i);
		else if(_expression[i] != ' ')
		{
			std::cout << "Error" << std::endl;
			return ;
		}
	}
	if (_stack.size() != 1)
		std::cout << "Error" << std::endl;
	else
		std::cout << _stack.top() << std::endl;
}
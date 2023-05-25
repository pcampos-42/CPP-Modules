/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:01:11 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/18 12:04:50 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0)
{}

Span::Span(Span const & src) : _size(src._size)
{
	this->_storage = src._storage;
}

Span::Span(unsigned int n) : _size(n)
{}

Span::~Span()
{}

Span& Span::operator=(Span const &rhs)
{
	this->_storage = rhs._storage;
	return(*this);
}

void Span::addNumber(int n)
{
	if(_storage.size() == _size)
		throw SpanFull();
	_storage.push_back(n);
}

void Span::fillSpan()
{
	if(_storage.size() == _size)
		throw SpanFull();
	srand(time(NULL));
	while(_storage.size() < _size)
	{
		const int value = rand();
		_storage.push_back(value);
	}
}

int Span::shortestSpan()
{
	if(_storage.size() < 2)
		throw NoSpan();
	std::stable_sort(_storage.begin(), _storage.end());
	int	span = 2147483647;
	for (std::vector<int>::iterator it = _storage.begin(); it + 1 != _storage.end(); ++it)
	{
		if(*(it + 1) - *it < span)
			span = *(it + 1) - *it;
	}
	return (span);
}

int Span::longestSpan()
{
	if(_storage.size() < 2)
		throw NoSpan();
	return(*std::max_element(_storage.begin(), _storage.end()) - *std::min_element(_storage.begin(), _storage.end()));
}
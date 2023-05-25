/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:47:33 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/18 11:29:10 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN
#define SPAN

# include <iostream>
# include <stdexcept>
# include <vector>
# include <cstdlib>
# include <algorithm>

class Span
{
private:

	Span();
	Span& operator=(Span const &rhs);

	std::vector<int>	_storage;
	const unsigned int		_size;

public:

	Span(Span const & src);
	Span(unsigned int n);
	~Span();

	void	addNumber(int n);
	void	fillSpan();
	int		shortestSpan();
	int		longestSpan();
	
	class SpanFull :public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Can't add number because Span is already full.");
		}
	};

	class NoSpan :public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("There are less then 2 numbers stored. No span can be found.");
		}
	};
};

#endif
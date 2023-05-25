/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:12:19 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/25 20:14:35 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK
# define MUTANTSTACK

# include <iostream>
# include <stack>
# include <iterator>
# include <deque>
# include <vector>
# include <list>

template< typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C >
{
private:

public:

	MutantStack();
	MutantStack(MutantStack const &src);
	~MutantStack();
	MutantStack& operator=(MutantStack const &rhs);

	typedef typename MutantStack<T, C>::container_type::iterator			iterator;
	typedef typename MutantStack<T, C>::container_type::reverse_iterator	r_iterator;
	
	typename C::iterator begin();
	typename C::iterator end();
	typename C::iterator rbegin();
	typename C::iterator rend();
};

template< typename T, typename C >
MutantStack<T, C>::MutantStack() :std::stack<T, C>(){
}

template< typename T, typename C >
MutantStack<T, C>::MutantStack(MutantStack const &src) :std::stack<T, C>(){
	if(this != &src)
		*this = src;
}

template< typename T, typename C >
MutantStack<T, C>::~MutantStack(){}

template< typename T, typename C >
typename C::iterator MutantStack<T, C>::begin(){
	return(this->std::stack<T, C>::c.begin());
}

template< typename T, typename C >
typename C::iterator MutantStack<T, C>::end(){
	return(this->std::stack<T, C>::c.end());
}

template< typename T, typename C >
typename C::iterator MutantStack<T, C>::rbegin(){
	return(this->std::stack<T, C>::c.rbegin());
}

template< typename T, typename C >
typename C::iterator MutantStack<T, C>::rend(){
	return(this->std::stack<T, C>::c.rend());
}

#endif
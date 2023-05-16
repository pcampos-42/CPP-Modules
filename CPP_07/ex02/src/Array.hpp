/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:47:33 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/16 11:04:18 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY
#define ARRAY

#include <exception>

template<typename T>
class Array
{
private:

	T* _content;
	int _len;

	Array& operator=(Array const &rhs) {
		for(int i = 0; i < _len; i++)
			_content[i] = rhs._content[i];
		return (*this);
	}

public:
	Array() : _len(0) {
		_content = new T[0];
	};

	Array(unsigned int n) : _len(n) {
		_content = new T[n];
	};

	Array(Array const &src) : _len(src._len) {
		this->_content = new T[src._len];
		*this = src;
	}

	~Array(){
		delete[] _content;
	};

	T& operator[](int index){
		if (index >= this->_len || index < 0)
			throw std::exception();
		return (this->_content[index]);
	}

	int size() {return(this->_len);}
};

#endif
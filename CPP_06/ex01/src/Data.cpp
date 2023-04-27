/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:07:11 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/26 15:32:49 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{}

Data::Data(Data const& src)
{
	*this = src;
}

Data::~Data()
{}

Data&	Data::operator=(Data const& rhs)
{
	(void)rhs;
	return(*this);
}

uintptr_t	Data::getRaw()
{
	return(_raw);
}

void	Data::setRaw(uintptr_t value)
{
	this->_raw = value;
}
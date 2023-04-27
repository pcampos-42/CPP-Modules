/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:09:12 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/26 15:36:12 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{}

Serializer::~Serializer()
{}

Serializer::Serializer(Serializer const& src)
{
	*this = src;
}

Serializer& Serializer::operator=(Serializer const& rhs)
{
	(void)rhs;
	return(*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
	uintptr_t ret;

	ret = reinterpret_cast<uintptr_t>(ptr);
	return (ret);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data* ret;

	ret = reinterpret_cast<Data*>(raw);
	return (ret);
}
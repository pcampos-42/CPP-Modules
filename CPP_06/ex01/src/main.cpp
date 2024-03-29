/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:08:36 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/27 17:45:34 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main()
{
	Data	*data;
	Serializer	serializer;

	data = new Data();
	std::cout << &data << std::endl;
	data->setRaw(serializer.serialize(data));
	std::cout << data->getRaw() << std::endl;
	data = serializer.deserialize(data->getRaw());
	std::cout << &data << std::endl;
	delete data;
}
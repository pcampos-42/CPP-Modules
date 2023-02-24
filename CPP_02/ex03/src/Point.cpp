/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:47:33 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/24 12:53:44 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	//std::cout << "Default construct called" << std::endl;
}

Point::Point(Point const& src)
{
	//std::cout << "Copy construct called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Point&	Point::operator=(Point const& rhs)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_x = rhs._x;
		this->_y = rhs._y;
	}
	return (*this);
}
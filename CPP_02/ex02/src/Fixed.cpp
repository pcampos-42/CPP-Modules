/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:52:47 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/24 12:41:15 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default construct called" << std::endl;
	_fixed_point = 0;
}

Fixed::Fixed(Fixed const& src)
{
	//std::cout << "Copy construct called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const& N)
{
	//std::cout << "Int construct called" << std::endl;
	_fixed_point = N << _nbits;
}

Fixed::Fixed(float const& N)
{
	//std::cout << "Float construct called" << std::endl;
	int	x = roundf(N * (1 << _nbits));
	_fixed_point = x;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const& rhs)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point = raw;
}

float	Fixed::toFloat(void) const
{
	float	x = this->_fixed_point / roundf(1 << this->_nbits);
	return (x);
}

int	Fixed::toInt(void) const
{
	int	x = this->_fixed_point >> this->_nbits;

	return (x);
}

std::ostream& operator<<(std::ostream& o, Fixed const& i)
{
	o << i.toFloat();

	return (o);
}

bool Fixed::operator>(Fixed const& rhs) const
{
	return (this->_fixed_point > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const& rhs) const
{
	return (this->_fixed_point < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const& rhs) const
{
	return (this->_fixed_point >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const& rhs) const
{
	return (this->_fixed_point <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const& rhs) const
{
	return (this->_fixed_point == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const& rhs) const
{
	return (this->_fixed_point != rhs.getRawBits());
}

Fixed& Fixed::operator+(Fixed const& rhs)
{
	this->_fixed_point = this->_fixed_point + rhs.getRawBits();
	return (*this);
}

Fixed& Fixed::operator-(Fixed const& rhs)
{
	this->_fixed_point = this->_fixed_point - rhs.getRawBits();
	return (*this);
}

Fixed& Fixed::operator*(Fixed const& rhs)
{
	this->_fixed_point = (this->_fixed_point * rhs.getRawBits()) / (1 << _nbits);
	return (*this);
}

Fixed& Fixed::operator/(Fixed const& rhs)
{
	this->_fixed_point = (this->_fixed_point * (1 << _nbits)) / rhs.getRawBits();
	return (*this);
}

Fixed& Fixed::operator++()
{
	this->_fixed_point++;
	return (*this);
}

Fixed Fixed::operator++(int decoy)
{
	(void)decoy;
	Fixed ret = Fixed (*this);
	this->_fixed_point++;
	return (ret);
}

Fixed& Fixed::operator--()
{
	this->_fixed_point--;
	return (*this);
}

Fixed Fixed::operator--(int decoy)
{
	(void)decoy;
	Fixed ret = Fixed (*this);
	this->_fixed_point--;
	return (ret);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b)
{
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b)
{
	return (a > b ? a : b);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:52:38 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/24 12:44:01 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	Fixed c(4);
	Fixed d(2);
	
	std::cout << c << std::endl;
	c = c + d;
	std::cout << c << std::endl;
	c = c * d;
	std::cout << c << std::endl;
	c = c - d;
	std::cout << c << std::endl;
	c = c / d;
	std::cout << c << std::endl;
	
	return 0;
}
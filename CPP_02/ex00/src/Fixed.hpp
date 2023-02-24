/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:52:43 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/17 12:06:40 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
# define FIXED

# include <iostream>
# include <string>

class Fixed
{
private:
	
	int _fixed_point;
	static const int _nbits = 8;
	
public:

	Fixed(); //Default construct
	Fixed(Fixed const & src); //Copy construct
	~Fixed(); //Default destruct

	Fixed& operator=(Fixed const & rhs); //Copy assignment operator overload

	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
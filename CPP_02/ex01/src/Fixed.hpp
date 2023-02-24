/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:52:43 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/22 14:16:50 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
# define FIXED

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	
	int _fixed_point;
	static const int _nbits = 8;
	
public:

	Fixed(); //Default construct
	Fixed(Fixed const& src); //Copy construct
	Fixed(int const& N);
	Fixed(float const& N);
	~Fixed(); //Default destruct

	Fixed& operator=(Fixed const & rhs); //Copy assignment operator overload

	int	getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int	toInt(void) const;
};

std::ostream& operator<<(std::ostream& o, Fixed const& i);

#endif
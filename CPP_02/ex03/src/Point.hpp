/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:46:24 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/24 12:51:58 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT
# define POINT

# include "Fixed.hpp"

class Point
{
private:
	
	Fixed const _x;
	Fixed const _y;
	
public:

	Point(); //Default construct
	Point(Point const& src); //Copy construct
	~Point(); //Default destruct

	Point& operator=(Point const& rhs); //Copy assignment operator overload
};

#endif
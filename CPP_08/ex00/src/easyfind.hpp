/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:47:33 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/18 11:49:10 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
#define EASYFIND

# include <iostream>
# include <stdexcept>
# include <vector>

template< typename T >
typename T::iterator	easyfind(T &stack, int needle){
	for (typename T::iterator it = stack.begin(); it != stack.end(); ++it)
	{
		if(*it == needle)
			return (it);
	}
	throw std::exception();
};

#endif
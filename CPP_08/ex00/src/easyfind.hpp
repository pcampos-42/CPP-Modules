/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:47:33 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/26 12:32:53 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
#define EASYFIND

# include <iostream>
# include <stdexcept>
# include <algorithm>

template< typename T >
typename T::iterator	easyfind(T &stack, int needle){
	typename T::iterator it = std::find(stack.begin(), stack.end(), needle);
	if(it != stack.end())
		return (it);
	throw std::exception();
};

#endif
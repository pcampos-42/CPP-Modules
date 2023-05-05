/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:13:14 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/05 18:28:53 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER
# define ITER

template< typename T >
void	iter(T *array, int len, void (*f)(T const&)){
	for(int i = 0, i < len, i++)
		f(array[i]);
};

#endif
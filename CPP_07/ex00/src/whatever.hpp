/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:48:54 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/05 18:09:40 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER
# define WHATEVER

template< typename T >
void	swap(T &a, T &b){
	T	tmp = a;
	a = b;
	b = tmp;
};

template< typename T >
T		max(T a, T b){
	return (a >= b ? a : b);
};

template< typename T >
T		min(T a, T b){
	return (a < b ? a : b);
};

#endif
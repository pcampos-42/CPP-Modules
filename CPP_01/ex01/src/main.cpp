/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:49:14 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/11 14:37:18 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *a_zombie = zombieHorde(1, "Cyan");
	for (int n = 0; n < 1; n++)
		a_zombie[n].announce();
	delete[] a_zombie;

	Zombie *b_zombie = zombieHorde(5, "Brown");
	for (int n = 0; n < 5; n++)
		b_zombie[n].announce();
	delete[] b_zombie;

	Zombie *c_zombie = zombieHorde(10, "Yellow");
	for (int n = 0; n < 10; n++)
		c_zombie[n].announce();
	delete[] c_zombie;

	return (0);
}
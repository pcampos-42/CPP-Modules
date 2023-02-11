/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:33:13 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/11 13:43:35 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie a_zombie = Zombie("Red");
	a_zombie.announce();

	randomChump("Blue");

	Zombie *c_zombie = newZombie("Green");
	c_zombie->announce();
	delete c_zombie;

	return (0);
}
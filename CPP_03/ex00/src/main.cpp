/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:01:01 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/04 15:04:28 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Alberto");
	ClapTrap b(a);
	ClapTrap c("Asdrubal");

	a.attack("Asdrubal");
	c.takeDamage(3);
	c.beRepaired(3);
	b.takeDamage(10);

	return (0);
}
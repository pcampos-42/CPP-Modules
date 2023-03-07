/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:01:01 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/07 12:01:25 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap a("Alberto");
	ScavTrap b("Aderito");
	FragTrap c("Asdrubal");
	DiamondTrap d("Aroldo");
	

	a.attack("alguem");
	b.attack("alguem");
	c.attack("alguem");
	d.attack("alguem");

	a.takeDamage(10);
	b.takeDamage(10);
	c.takeDamage(10);
	d.takeDamage(10);

	b.guardGate();
	d.guardGate();
	c.highFivesGuys();
	d.highFivesGuys();

	d.whoAmI();

	return (0);
}
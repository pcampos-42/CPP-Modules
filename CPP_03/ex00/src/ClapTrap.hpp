/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:34:59 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/04 14:50:19 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
# define CLAPTRAP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	
	std::string _name;
	int _hp;
	int _ep;
	int _ad;

public:
	
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& src);
	~ClapTrap();

	ClapTrap& operator=(ClapTrap const& rhs);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif
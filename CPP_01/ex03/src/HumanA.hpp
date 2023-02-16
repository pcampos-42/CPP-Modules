/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:12:04 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/14 11:24:29 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:

	std::string _name;
	Weapon&	_weapon;
	
public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack();
};

#endif
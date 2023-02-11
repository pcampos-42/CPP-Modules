/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:12:14 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/11 16:06:52 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{
private:

	std::string	_type;
	
public:

	Weapon();
	Weapon(std::string weapon_type);
	~Weapon();

	std::string	getType() const;
	void	setType(std::string new_type);
};

#endif
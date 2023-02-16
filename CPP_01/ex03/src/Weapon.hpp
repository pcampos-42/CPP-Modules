/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:12:14 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/14 11:21:31 by pcampos-         ###   ########.fr       */
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
	void	setType(std::string const& new_type);
};

#endif
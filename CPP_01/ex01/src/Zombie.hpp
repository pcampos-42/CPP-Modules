/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:18:39 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/11 14:34:53 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie
{
private:

	std::string	_name;
	
public:

	Zombie();
	Zombie(std::string name);
	~Zombie();

	static std::string	default_name;
	void	announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif
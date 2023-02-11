/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:18:39 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/11 13:31:08 by pcampos-         ###   ########.fr       */
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

	Zombie(std::string name);
	~Zombie();

	void	announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
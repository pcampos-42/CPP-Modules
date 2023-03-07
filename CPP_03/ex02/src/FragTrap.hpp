/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:34:49 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/06 15:44:55 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
# define FRAGTRAP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	
public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const& src);
	~FragTrap();

	FragTrap& operator=(FragTrap const & rhs);

	void highFivesGuys(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:49:27 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/14 13:23:26 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
# define BRAIN

#include <string>
#include <iostream>
#include <fstream>

class Brain
{
private:

public:

	Brain();
	Brain(Brain const& src);
	virtual ~Brain();

	Brain& operator=(Brain const& rhs);
	
	std::string ideas[100];
};

#endif
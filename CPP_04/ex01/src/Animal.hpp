/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:11:29 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/14 10:57:17 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
# define ANIMAL

#include <string>
#include <iostream>

class Animal
{
private:
	
protected:
	std::string _type;
public:

	Animal();
	Animal(Animal const& src);
	virtual ~Animal();

	Animal& operator=(Animal const& rhs);

	virtual void makeSound()const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:11:29 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/15 15:15:47 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
# define ANIMAL

#include <string>
#include <iostream>

class AAnimal
{
private:
	
protected:
	std::string _type;
public:

	AAnimal();
	AAnimal(AAnimal const& src);
	virtual ~AAnimal();

	AAnimal& operator=(AAnimal const& rhs);

	virtual void makeSound()const = 0;
};

#endif
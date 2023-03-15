/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:29:10 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/15 14:41:14 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
# define DOG

#include "Animal.hpp"
#include "Brain.hpp"
#include <cstdlib>

class Dog : public AAnimal
{
private:
	
	Brain*	_Brain;

public:
	Dog();
	Dog(Dog const& src);
	~Dog();

	Dog& operator=(Dog const& rhs);

	virtual void makeSound()const;
	std::string getIdea(int n);
};

#endif
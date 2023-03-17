/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:01:01 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/16 12:47:10 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	meta->makeSound();
	j->makeSound();
	i->makeSound();

	delete meta;
	delete i;
	delete j;

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongj = new WrongCat();
	const WrongCat* wrongi = new WrongCat();
	
	wrongmeta->makeSound();
	wrongj->makeSound();
	wrongi->makeSound();
	
	delete wrongmeta;
	delete wrongi;
	delete wrongj;
	
return 0;
}
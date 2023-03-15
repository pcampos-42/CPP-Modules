/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:01:01 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/15 15:16:02 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	//AAnimal test;
	
	AAnimal* meta[10];

	for(int n = 0; n < 10; n++) 
	{
		if (n < 5)
			meta[n] = new Cat();
		else
			meta[n] = new Dog();
	}
	
	Cat* testcat = new Cat();

	std::cout << ((Cat*)meta[0])->getIdea(0) << std::endl;
	std::cout << testcat->getIdea(0) << std::endl;

	testcat->setIdea("Arroz doce", 0);

	std::cout << ((Cat*)meta[0])->getIdea(0) << std::endl;
	std::cout << testcat->getIdea(0) << std::endl;

	for(int n = 0; n < 10; n++) 
		delete meta[n];
	
return 0;
}
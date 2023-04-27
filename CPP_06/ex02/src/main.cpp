/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:45:42 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/27 16:08:55 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <stdexcept>
#include <typeinfo>

Base* generate(void)
{	
	std::srand(time(NULL));
	int	a = std::rand();
	
	if (a % 3 == 0)
	{
		std::cout << "A returned" << std::endl;
		return (new A());
	}
	else if(a % 3 == 1)
	{
		std::cout << "B returned" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "C returned" << std::endl;
		return (new C());
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p) == NULL)
	{
		if (dynamic_cast<B*>(p) == NULL)
			std::cout << "Object of Type C" << std::endl;
		else
			std::cout << "Object of Type B" << std::endl;
	}
	else
		std::cout << "Object of Type A" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &ar = dynamic_cast<A&>(p);
		(void)ar;
		std::cerr << "Object of Type A" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		try
		{
			B &br = dynamic_cast<B&>(p);
			(void)br;
			std::cerr << "Object of Type B" << std::endl;
		}
		catch(const std::bad_cast& e)
		{
			std::cerr << "Object of Type C" << std::endl;
		}
	}
}

int main()
{
	Base *test = generate();

	identify(test);
	identify(*test);
	delete test;
}
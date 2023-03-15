/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:04:39 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/15 14:41:40 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
# define CAT

#include "Animal.hpp"
#include "Brain.hpp"
#include <cstdlib>

class Cat : public AAnimal
{
private:
	
	Brain*	_Brain;
	
public:
	Cat();
	Cat(Cat const& src);
	~Cat();

	Cat& operator=(Cat const& rhs);

	virtual void makeSound()const;
	std::string getIdea(int n);
	void setIdea(std::string const& str, int n);
};

#endif
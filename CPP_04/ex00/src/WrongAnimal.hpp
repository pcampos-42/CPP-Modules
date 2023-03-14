/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:43:30 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/14 10:45:07 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL
# define WRONGANIMAL

#include <string>
#include <iostream>

class WrongAnimal
{
private:
	
protected:
	std::string _type;
public:

	WrongAnimal();
	WrongAnimal(WrongAnimal const& src);
	~WrongAnimal();

	WrongAnimal& operator=(WrongAnimal const& rhs);

	void makeSound()const;
};

#endif
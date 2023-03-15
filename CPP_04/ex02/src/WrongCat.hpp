/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:46:21 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/14 10:48:16 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT
# define WRONGCAT

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	
public:
	WrongCat();
	WrongCat(WrongCat const& src);
	~WrongCat();

	WrongCat& operator=(WrongCat const& rhs);

	void makeSound()const;
};

#endif
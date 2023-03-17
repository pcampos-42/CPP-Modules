/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:21:56 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/17 14:05:28 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
# define AMATERIA

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
private:

protected:

	std::string _type;

public:

	AMateria();
	AMateria(AMateria const& src);
	AMateria(std::string const& type);
	virtual ~AMateria();

	AMateria& operator=(AMateria const& rhs);
	
	std::string const& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;

};

#endif
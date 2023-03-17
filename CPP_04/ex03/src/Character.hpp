/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:50:50 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/17 14:16:48 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER
# define CHARACTER

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:

	AMateria* _inv[4];
	std::string _name;

public:

	Character();
	Character(std::string const& name);
	Character(Character const& src);
	virtual  ~Character();

	Character& operator=(Character const& rhs);

	virtual std::string const& getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
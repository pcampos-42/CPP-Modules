/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Heal.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:02:30 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/15 16:07:45 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAL
# define HEAL

#include "AMateria.hpp"

class Heal : public AMateria
{
private:
	
public:

	Heal();
	Heal(Heal const& src);
	~Heal();

	Heal& operator=(Heal const& rhs);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
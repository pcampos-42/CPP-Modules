/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:55:13 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/17 14:17:03 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE
# define ICE

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
private:
	
public:

	Ice();
	Ice(Ice const& src);
	virtual ~Ice();

	Ice& operator=(Ice const& rhs);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
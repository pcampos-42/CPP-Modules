/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:01:43 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/17 14:06:32 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE
# define MATERIASOURCE

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:

	AMateria* _inv[4];

public:

	MateriaSource();
	MateriaSource(MateriaSource const& src);
	virtual ~MateriaSource();

	MateriaSource& operator=(MateriaSource const& rhs);

	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const& type);
};

#endif

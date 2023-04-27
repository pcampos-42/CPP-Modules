/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:09:09 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/27 12:08:31 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER
# define SERIALIZER

# include "Data.hpp"

class Serializer
{
private:

	Serializer(Serializer const& src);
	Serializer& operator=(Serializer const& rhs);

public:

	Serializer();
	~Serializer();

	uintptr_t serialize(Data *ptr);
	Data* deserialize(uintptr_t raw);
};

#endif
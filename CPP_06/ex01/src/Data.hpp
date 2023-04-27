/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:07:22 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/27 11:50:10 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA
# define DATA

# include <stdint.h>

class Data
{
private:

	uintptr_t _raw;
	
	Data(Data const& src);

	Data& operator=(Data const &rhs);

public:

	Data();
	~Data();

	uintptr_t getRaw();
	void setRaw(uintptr_t value);
	
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:06:58 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/08 11:54:52 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact	_contacts[8];
	static int	_contact_n;
	
public:
	PhoneBook();
	~PhoneBook();

	void	PhoneBook_add();
	void	PhoneBook_search();
};

#endif
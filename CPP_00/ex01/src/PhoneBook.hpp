/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:06:58 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/10 18:00:32 by pcampos-         ###   ########.fr       */
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
	
	void	show_list();
	void	show_contact_info(int index);
	void	print_less(std::string string);
	
public:
	PhoneBook();
	~PhoneBook();

	void	PhoneBook_add();
	void	PhoneBook_search();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:14:54 by pcampos-          #+#    #+#             */
/*   Updated: 2023/02/16 11:57:03 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL
# define HARL

# include <string>
# include <iostream>


class Harl
{
private:
	
	void	debug() const;
	void	info() const;
	void	warning() const;
	void	error() const;
	
	typedef	struct harl_funcs {
		std::string	name;
		void	(Harl::*func)() const;
	}	funcs_ref;

	funcs_ref funcs[4];

public:

	Harl();
	~Harl();

	void	complain(std::string level);
};

#endif
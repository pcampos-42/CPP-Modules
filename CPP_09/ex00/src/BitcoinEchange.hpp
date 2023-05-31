/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinEchange.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 00:11:41 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/31 17:51:43 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINECHANGE
# define BITCOINECHANGE

# include <map>
# include <iostream>
# include <fstream>
# include <string>
# include <exception>
# include <stdlib.h>
# include <algorithm>

class BitcoinEchange
{
private:

	BitcoinEchange(BitcoinEchange const& src);
	BitcoinEchange& operator=(BitcoinEchange const& rhs);

	bool	check_date(std::string key);
	bool	correct_date(std::string date1, std::string date2);

public:

	BitcoinEchange();
	~BitcoinEchange();

	void	doEchange(char *input, std::map<std::string,float> data);
};


#endif
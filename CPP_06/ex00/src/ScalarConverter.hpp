/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:21:52 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/25 14:56:21 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
# define SCALARCONVERTER

# include <string>
# include <sstream>
# include <iostream>

class ScalarConverter
{
private:

	ScalarConverter(ScalarConverter const& src);
	ScalarConverter operator=(ScalarConverter const& rhs);

	bool check_param(std::string &param);
	void convert_char(char &param);
	void convert_int(int &param);
	void convert_float(float &param);
	void convert_double(double &param);
	void special_case(std::string &param);
	
public:

	ScalarConverter();
	~ScalarConverter();


	void	convert(std::string &param);
};

#endif
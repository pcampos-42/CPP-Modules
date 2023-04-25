/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:21:55 by pcampos-          #+#    #+#             */
/*   Updated: 2023/04/25 15:03:37 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(ScalarConverter const& src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter ScalarConverter::operator=(ScalarConverter const& rhs)
{
	(void)rhs;
	return(*this);
}

void	ScalarConverter::convert(std::string &param)
{
	std::stringstream tmp;
	
	if(check_param(param))
		return ;
	if (param.length() == 1 && param.find_first_not_of("0123456789") != param.npos)
		convert_char(param[0]);
	else if (param.find_first_of('.') != param.npos)
	{
		double d;
		tmp << param;
		tmp >> d;
		convert_double(d);
	}
	else if (param[param.length() - 1] == 'f')
	{
		float f;
		param.erase(param.length() - 1);
		tmp << param;
		tmp >> f;
		convert_float(f);
	}
	else
	{
		int i;
		tmp << param;
		tmp >> i;
		convert_int(i);
	}
}

bool	ScalarConverter::check_param(std::string &param)
{
	if(param == "+inf" || param == "-inf" || param == "+inff" || param == "-inff" || param == "nan" || param == "nanf")
	{
		special_case(param);
		return true;
	}
	if (param.find_first_of("1234567890+-") == 0 && param.find_first_not_of("1234567890+-.f") == param.npos)
	{
		if(param.find_first_of('f') != param.npos && (param.find_first_of('f') != param.length() - 1
			|| (param.find_first_of('f') == param.length() - 1 && param.find_first_of('.') ==  param.npos)))
		{
			std::cout << "ERROR: Invalid Input" << std::endl << "Input must be of valid type (char, int, float or double)" << std::endl;
			return true;
		}
		else if(param.find_last_of("+-") != 0 && param.find_last_of("+-") != param.npos)
		{
			std::cout << "ERROR: Invalid Input" << std::endl << "Input must be of valid type (char, int, float or double)" << std::endl;
			return true;
		}
		else if(param.find_first_of('.') == 0 || param.find_last_of('.') == param.length() - 1
				|| param.find_first_of('.') != param.find_last_of('.')
				|| (param.find_first_of("+-") == 0 && param.find_first_of('.') == 1)
				|| (param.find_last_of('f') == param.length() - 1 && param.find_last_of('.') == param.length() - 2))
		{
			std::cout << "ERROR: Invalid Input" << std::endl << "Input must be of valid type (char, int, float or double)" << std::endl;
			return true;
		}
	}
	else if (param[1] != '\0')
	{
		std::cout << "ERROR: Invalid Input" << std::endl << "Input must be of valid type (char, int, float or double)" << std::endl;
		return true;
	}
	return false;
}

void	ScalarConverter::convert_char(char &param)
{
	std::cout << "char: " << param << std::endl;
	std::cout << "int: " << static_cast<int>(param) << std::endl;
	std::cout << "float: " << static_cast<float>(param) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(param) << std::endl;
}

void	ScalarConverter::convert_int(int &param)
{
	if ((param >= 0 && param < 32) || param == 127)
		std::cout << "char: non displayable" << std::endl;
	else if(param < 0 || param > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(param) << "\'" << std::endl;
	std::cout << "int: " << param << std::endl;
	std::cout << "float: " << static_cast<float>(param) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(param) << std::endl;
}

void	ScalarConverter::convert_float(float &param)
{
	if ((param >= 0 && param < 32) || param == 127)
		std::cout << "char: non displayable" << std::endl;
	else if(param < 0 || param > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(param) << "\'" << std::endl;
	std::cout << "int: " << static_cast<int>(param) << std::endl;
	std::cout << "float: " << param << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(param) << std::endl;
}

void	ScalarConverter::convert_double(double &param)
{
	if ((param >= 0 && param < 32) || param == 127)
		std::cout << "char: non displayable" << std::endl;
	else if(param < 0 || param > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(param) << "\'" << std::endl;
	std::cout << "int: " << static_cast<int>(param) << std::endl;
	std::cout << "float: " << static_cast<float>(param) << "f" << std::endl;
	std::cout << "double: " << param << std::endl;
}

void	ScalarConverter::special_case(std::string &param)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if(param == "nan" || param == "+inf" || param == "-inf")
	{
		std::cout << "float: " << param << "f" << std::endl;
		std::cout << "double: " << param << std::endl;
	}
	else if(param == "nanf" || param == "+inff" || param == "-inf")
	{
		std::cout << "float: " << param << std::endl;
		param.erase(param.length() - 1);
		std::cout << "double: " << param << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinEchange.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 00:11:41 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/31 17:51:21 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinEchange.hpp"

BitcoinEchange::BitcoinEchange()
{}

BitcoinEchange::BitcoinEchange(BitcoinEchange const& src)
{
	*this = src;
}

BitcoinEchange::~BitcoinEchange()
{}

BitcoinEchange& BitcoinEchange::operator=(BitcoinEchange const& rhs)
{
	(void)rhs;
	return(*this);
}

bool BitcoinEchange::check_date(std::string key)
{
	std::string	t_year = key.substr(0,4);
	std::string	t_month = key.substr(5,2);
	std::string	t_day = key.substr(8,2);

	int year = atoi(t_year.c_str());
	int month = atoi(t_month.c_str());
	int day = atoi(t_day.c_str());

	if (day < 1 || year < 2009)
		return (false);

	switch (month)
	{
	case 2:
		if (year % 4 == 0)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0)
				{
					if (day > 29)
						return (false);
				}
				else
				{
					if (day > 28)
						return (false);
				}
			}
			else
			{
				if (day > 29)
					return (false);
			}
		}
		else
		{
			if (day > 28)
				return (false);
		}
		break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (day > 31)
			return (false);
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		if (day > 30)
			return (false);
		break;

	default:
		return (false);
		break;
	}
	return (true);
}

bool BitcoinEchange::correct_date(std::string date1, std::string date2)
{
	std::string	t_year = date1.substr(0,4);
	int year1 = atoi(t_year.c_str());
	
	std::string	t_month = date1.substr(5,2);
	int month1 = atoi(t_month.c_str());
	
	std::string	t_day = date1.substr(8,2);
	int day1 = atoi(t_day.c_str());

	t_year = date2.substr(0,4);
	int year2 = atoi(t_year.c_str());
	
	t_month = date2.substr(5,2);
	int month2 = atoi(t_month.c_str());
	
	t_day = date2.substr(8,2);
	int day2 = atoi(t_day.c_str());

	if (year2 < year1)
		return (false);
	else
	{
		if(year2 == year1)
		{
			if(month2 < month1)
				return (false);
			else
			{
				if (month2 == month1)
					if(day2 < day1)
						return(false);
			}
		}
	}
	return (true);
}

void	BitcoinEchange::doEchange(char *input, std::map<std::string,float> data)
{
	std::ifstream	file;
	file.open(input);
	if (file.is_open())
	{
		std::string	line;
		std::string	key;
		float	value;
		
		getline(file, line);
		while (getline(file, line))
		{
			std::remove(line.begin(), line.end(), ' ');
			key = line.substr(0 ,line.find('|'));
			std::string tmp = line.substr(line.find('|') + 1);
			value = atof(tmp.c_str());
			
			if (!check_date(key))
				std::cout << "ERROR: invalid date => " << key << std::endl;
			else if (value < 0)
				std::cout << "ERROR: not a positive number." << std::endl;
			else if (value > 1000)
				std::cout << "ERROR: too large a number." << std::endl;
			else
			{
				for (std::map<std::string,float>::iterator it = data.begin(); it != data.end(); ++it)
				{
					if (key == it->first)
						std::cout << key << " => " << value << " = " << value * it->second << std::endl;
					else if (correct_date(key, it->first))
					{
						it--;
						std::cout << key << " => " << value << " = " << value * it->second << std::endl;
						break ;
					}
				}
			}
		}
		file.close();
	}
}
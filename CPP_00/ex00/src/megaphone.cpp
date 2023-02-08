#include <iostream>
#include <cstring>
#include <string>

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		std::string str = av[i];
		for (size_t j = 0; j < str.size(); j++)
			str[j] = toupper(str[j]);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
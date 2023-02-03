#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	int	i = 1;
	int	len = 0;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < ac)
	{
		len = strlen(av[i]);
		for (int j = 0; j < len; j++)
			av[i][j] = toupper(av[i][j]);
		std::cout << av[i++];
	}
	std::cout << std::endl;
	return (0);
}
#include <iostream>
#include <fstream>
#include <string.h>
#include <cctype>

int		main(int argc, char **argv)
{
	std::ifstream	file;
	std::ofstream	file2;
	std::string		name;
	std::string		string;
	size_t		i;

	if (argc != 4)
	{
		std::cout << "Error: arguments" << std::endl;	
		return (1);
	}
	file.open(argv[1], std::ios::in);
	if (!(file.is_open()))
	{
		std::cout << "Error: can't open " << argv[1] << std::endl;
		return (1);
	}
	i = -1;
	while (argv[1][++i])
		argv[1][i] = toupper(argv[1][i]);
	name = std::string(argv[1]) + ".replace";
	file2.open(name);
	if (!(file2.is_open()))
	{
		std::cout << "Error: can't open " << name << std::endl;
		file.close();
		return (1);
	}
	while (1)
	{
		i = 0;
		std::getline(file, string);
		while ((i = string.find(argv[2], i)) != std::string::npos)
		{
			string.replace(i, std::strlen(argv[2]), argv[3]);
			i += std::strlen(argv[3]);
		}
		if (file.eof())
			break ;
		file2 << string << std::endl;
	}
	file2 << string;
	file.close();
	file2.close();
}

#include "PhoneBook.hpp"

void	PhoneBook::get_command(void)
{
	std::string str;
	int	num;	

	std::cout << "Welcome to PhoneBook!" << std::endl;
	count = 0;
	while (1)
	{
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
		std::cout << "Enter command (ADD, SEARCH or EXIT)" << std::endl << "> ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			break ;
		if (str == "ADD")
		{
			if (count == 8)
			{
				std::cout << "The PhoneBook is full! Starting a new one..." << std::endl;
				count = 0;
			}
			cont[count].get_data(count + 1);
			++count;
		}
		else if (str == "SEARCH")
		{
			if (count == 0)
			{
				std::cout << "The PhoneBook is empty, try to ADD some contacts before SEARCHing" << std::endl;
				continue ;
			}
			std::cout << "     index|" << "      name|" << " last name|" << "  nickname|" << std::endl;
			for (int i = 0; i < count; i++)
				cont[i].print();
			while (1)
			{
				std::cout << "Choose a contact" << std::endl << "> ";
				std::getline(std::cin, str);
				if (std::cin.eof())
					break ;
				try
				{
					if (str.find_last_not_of("1234567890") != std::string::npos)
						throw -1;
					num = atoi(str.c_str());
					if (num > count || num == 0)
						throw -1;
				}
				catch (...)
				{
					std::cout << "Wrong number, please try again" << std::endl;
					continue ;
				}
				cont[num - 1].print_full();
				break ;
			}
		}
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Wrong command, please try again" << std::endl;
	}
	std::cout << "See you next time!" << std::endl;
}

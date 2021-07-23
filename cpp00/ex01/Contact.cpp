#include "Contact.hpp"

void	Contact::print(void)
{
	std::string str;
	std::cout.width(10);
	std::cout << index << "|";
	std::cout.width(10);
	str = std::string(name, 0, 10);
	if (name.length() > 10)
		str[9] = '.';
	std::cout << str << "|";
	str = std::string(last_name, 0, 10);
	std::cout.width(10);
	if (last_name.length() > 10)
		str[9] = '.';
	std::cout << str << "|";
	str = std::string(nickname, 0, 10);
	std::cout.width(10);
	if (nickname.length() > 10)
		str[9] = '.';
	std::cout << str << "|" << std::endl;
}

void	Contact::print_full(void)
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal address: " << postal_address << std::endl;
	std::cout << "Email address: " << email_address << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Birthday date: " << birthday_date << std::endl;
	std::cout << "Favorite meal: " << favorite_meal << std::endl;
	std::cout << "Underwear color: " << underwear_color << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

void	Contact::get_data(size_t i)
{
	index = i;
	while (true)
	{
		std::cout << "Enter name: ";
		std::getline(std::cin, name);
		if (std::cin.eof())
			return ;
		if (name.empty())
			std::cout << "This is the mandatory field. You can't leave it blank" << std::endl;
		else
			break ;
	}
	while (true)
	{
		std::cout << "Enter last_name: ";
		std::getline(std::cin, last_name);
		if (std::cin.eof())
			return ;
		if (last_name.empty())
			std::cout << "This is the mandatory field. You can't leave it blank" << std::endl;
		else
			break ;
	}
	while (true)
	{
		std::cout << "Enter nickname: ";
		std::getline(std::cin, nickname);
		if (std::cin.eof())
			return ;
		if (nickname.empty())
			std::cout << "This is the mandatory field. You can't leave it blank" << std::endl;
		else
			break ;
	}
	if (std::cin.eof())
		return ;
	std::cout << "Enter login: ";
	std::getline(std::cin, login);
	if (std::cin.eof())
		return ;
	std::cout << "Enter postal_address: ";
	std::getline(std::cin, postal_address);
	if (std::cin.eof())
		return ;
	std::cout << "Enter email_address: ";
	std::getline(std::cin, email_address);
	if (std::cin.eof())
		return ;
	std::cout << "Enter phone_number: ";
	std::getline(std::cin, phone_number);
	if (std::cin.eof())
		return ;
	std::cout << "Enter birthday_date: ";
	std::getline(std::cin, birthday_date);
	if (std::cin.eof())
		return ;
	std::cout << "Enter favorite_meal: ";
	std::getline(std::cin, favorite_meal);
	if (std::cin.eof())
		return ;
	std::cout << "Enter underwear_color: ";
	std::getline(std::cin, underwear_color);
	if (std::cin.eof())
		return ;
	std::cout << "Enter darkest_secret: ";
	std::getline(std::cin, darkest_secret);
	if (std::cin.eof())
		return ;
}

#include <iostream>
#include <string>

class	Contact
{
	public:
		void	print();
		void	print_full();
		void	get_data(size_t i);
	private:
		size_t	index;
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;
};

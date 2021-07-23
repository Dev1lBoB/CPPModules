#include <iostream>
#include <algorithm>
#include <iomanip>
int		showRealType(std::string str, int a)
{
	char c;
	int i;
	float f;
	double d;

	if (a == 0)
	{
		c = str[0];
		std::cout << "Char: " << c << std::endl;
		i = static_cast<int>(c);
		std::cout << "Int: " << i << std::endl;
		f = static_cast<float>(c);
		std::cout << "Float: " << f << ".0f" << std::endl;
		d = static_cast<double>(c);
		std::cout << "Double: " << d << ".0" << std::endl;
	}
	else if (a == 1)
	{
		std::cout.precision(2000);
		try
		{
			d = std::stod(str);
		}
		catch (...)
		{
		}
		std::cout << "Char: ";
		if (d > 127 || d < -128)
			std::cout << "Impossible";
		else if (d < 32 || d == 127)
			std::cout << "Not displayable";
		else
		{
			c = static_cast<char>(d);
			std::cout << "'" << c << "'";
		}
		i = static_cast<int>(d);
		std::cout << std::fixed << std::setprecision(1);
		if (d > 2147483647 || d < -2147483648)
			std::cout << std::endl << "Int: Impossible" << std::endl << "Float: ";
		else
			std::cout << std::endl << "Int: " << i << std::endl << "Float: ";
		f = static_cast<float>(d);
		std::cout << f << "f" << std::endl << "Double: ";
		std::cout << d << std::endl;
	}
	else if (a == 2)
		std::cout << "Char: Impossible\nInt: Impossible\nFloat: " << str << "f\nDouble: " << str << std::endl;
	return 0;
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::string str(argv[1]);
	size_t n;

	if (str == "+inf" || str == "-inf" || str == "nan" || str == "nanf")
		return showRealType(str, 2);	
	n = std::count(str.begin(), str.end(), '+');
	if (n > 1)
	{
		std::cout << "Error" << std::endl;
		return 1;
	}
	n = std::count(str.begin(), str.end(), '-');
	if (n > 1)
	{
		std::cout << "Error" << std::endl;
		return 1;
	}
	if (str.find_last_not_of("1234567890.f-+") != std::string::npos \
			|| str == "f" || str == "." || str == "+" || str == "-")
	{
		if (str.size() == 1)
		{
			std::cout << "ETO CHAR" << std::endl;
			return showRealType(str, 0);
		}
		else
			std::cout << "Error" << std::endl;
		return 1;
	}
	else
	{
		if ((str.find('+') != std::string::npos && str.find('+') != 0) || \
				(str.find('-') != std::string::npos && str.find('-') != 0))
		{
			std::cout << "Error" << std::endl;
			return 1;
		}
		n = std::count(str.begin(), str.end(), 'f');
		if (n > 1)
		{
			std::cout << "Error" << std::endl;
			return 1;
		}
		else if (n == 0)
		{
			n = std::count(str.begin(), str.end(), '.');
			if (n > 1)
			{
				std::cout << "Error" << std::endl;
				return 1;
			}
			else if (n == 0)
			{
				std::cout << "ETO INT" << std::endl;
				return showRealType(str, 1);
			}
			else
			{
				std::cout << "ETO DUBL" << std::endl;
				return showRealType(str, 1);
			}
		}
		else
		{
			if (str.find('f') != str.size() - 1)
			{
				std::cout << "Error" << std::endl;
				return 1;
			}
			n = std::count(str.begin(), str.end(), '.');
			if (n > 1)
			{
				std::cout << "Error" << std::endl;
				return 1;
			}
			std::cout << "ETO MORSKOY FLOT" << std::endl;
			return showRealType(str, 1);
		}
	}
}

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	num = 0;
};

Fixed::Fixed(Fixed const &Num)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Num;
}

Fixed::Fixed(int const &Num)
{
	std::string str;

	std::cout << "Int constructor called" << std::endl;
	num = Num << bit;
}

Fixed::Fixed(float const &Num)
{
	std::cout << "Float constructor called" << std::endl;
	num = (int)roundf(Num * (1 << bit));
}

Fixed &Fixed::operator=(Fixed const &Num)
{
	std::cout << "Assignation operator called" << std::endl;
	num = Num.num;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &Num)
{
	out << Num.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return ((float)num / (1 << bit));
}

int		Fixed::toInt(void) const
{
	return (num >> bit);
}

void	Fixed::setRawBits(int const raw)
{
	num = raw;
}

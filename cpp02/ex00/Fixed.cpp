#include "Fixed.hpp"

Fixed::Fixed():num(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed const &Num)
{
	std::cout << "Copy constructor called" << std::endl;
	num = Num.getRawBits();
}

Fixed &Fixed::operator=(Fixed &Num)
{
	std::cout << "Assignation operator called" << std::endl;
	num = Num.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits()const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (num);
}

void	Fixed::setRawBits(int const raw)
{
	num = raw;
}

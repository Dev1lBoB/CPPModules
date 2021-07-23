#include <iostream>
#include <string>
#include <cmath>

class	Fixed
{
	public:
		Fixed();
		Fixed(int const &Num);
		Fixed(float const &Num);
		Fixed(Fixed const &Num);
		Fixed &operator=(Fixed const &Num);
		~Fixed();
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
	private:
		int		num;
		static const int bit = 8;
};
		
std::ostream &operator<<(std::ostream &out, const Fixed &Num);

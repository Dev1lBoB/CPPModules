#include <iostream>

class	Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &Num);
		Fixed &operator=(Fixed &Num);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
	private:
		int		num;
		static const int bit = 8;
};

#include <iostream>
#include <list>
class Span
{
	public:
		Span(size_t);
		Span(Span const &);
		Span &operator=(Span const &);
		~Span(){};
		void addNumber(int num);
		int shortestSpan();
		int longestSpan();
		class outOfBoundsException: public std::exception
		{
			public:
				outOfBoundsException() throw ();
				const char *what() const throw();
		};	
	private:
		Span(){};
		size_t Size;
		size_t Count;
		std::list<int> Lst;
};

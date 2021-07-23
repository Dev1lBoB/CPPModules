#include "Span.hpp"

Span::Span(size_t n):Size(n), Count(0){};

Span::Span(Span const &sp)
{
	*this = sp;
}

Span &Span::operator=(Span const &sp)
{
	Lst = sp.Lst;
	Size = sp.Size;
	Count = sp.Count;
	return *this;
}

void Span::addNumber(int num)
{
	if (Count == Size)
		throw std::exception();
	Lst.push_back(num);
	Count++;
}

int Span::shortestSpan()
{
	if (Count < 2)
		throw outOfBoundsException();
	std::list<int>::iterator it = Lst.begin();
	int prev = *it;
	it++;
	int span = std::abs(*it - prev);
	while (it != --Lst.end())
	{
		prev = *it;
		it++;
		if (std::abs(*it - prev) < span)
			span = std::abs(*it - prev);
	}
	return span;
}

int Span::longestSpan()
{
	if (Count < 2)
		throw outOfBoundsException();
	return std::abs(*std::max_element(Lst.begin(), Lst.end()) - \
			*std::min_element(Lst.begin(), Lst.end()));
}

Span::outOfBoundsException::outOfBoundsException() throw (){}

const char *Span::outOfBoundsException::what() const throw()
{
	return "Out of bounds";
}

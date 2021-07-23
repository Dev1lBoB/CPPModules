#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>

class Array
{
	public:
		Array()
		{
			siz = 0;
			arr = 0;
		}
		Array(unsigned int n)
		{
			arr = new T[n];
			siz = n;
			for (size_t i = 0; i < siz; i++)
				arr[i] = T();
		};
		~Array()
		{
			delete [] arr;
		};
		Array &operator=(Array const &ar)
		{
			delete [] arr;
			arr = new T[ar.siz];
			for (size_t i = 0; i < ar.siz; i++)
				arr[i] = ar.arr[i];
			siz = ar.siz;
			return *this;
		};
		Array(Array const &ar)
		{
			*this = ar;
		}
		T &operator[](size_t i)
		{
			if (i >= siz)
				throw outOfBoundsException();
			return arr[i];
		}
		size_t size()
		{
			return size;
		}
		class outOfBoundsException: public std::exception
		{
			public:
				outOfBoundsException() throw (){}
				const char *what() const throw()
				{
					return "Out of bounds";
				}
		};
	private:
		T *arr;
		size_t siz;
};

#endif

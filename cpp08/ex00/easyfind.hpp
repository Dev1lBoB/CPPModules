#include <iostream>

template <typename T>
int easyfind(T &ar, int num)
{
	typename T::iterator it = ar.begin();
	it = std::find(ar.begin(), ar.end(), num);
	if (it != ar.end())
		return 0;
	return -1;
}

#include "easyfind.hpp"
#include <list>
#include <vector>

int		main(void)
{
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(10);
	lst.push_back(15);
	std::cout << easyfind(lst, 15) << std::endl;
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	std::cout << easyfind(vec, 15) << std::endl;
	return 0;
}

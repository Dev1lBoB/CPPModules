#include <iostream>
#include <stack>
#include <list>
#include <algorithm>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack(): std::stack<T>(){};
		MutantStack(MutantStack const &st):std::stack<T>(st){};
		MutantStack &operator=(MutantStack const &){return *this;};
		iterator begin(){return (std::stack<T>::c.begin());}
		iterator end(){return (std::stack<T>::c.end());}
		~MutantStack(){};
	private:
};

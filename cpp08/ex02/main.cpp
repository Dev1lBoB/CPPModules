#include "MutantStack.hpp"

int		main(void)
{
	MutantStack<int> st;

	st.push(10);
	st.push(101);
	st.push(103);
	st.push(1);

    MutantStack<int>::iterator it = st.begin();
    ++it;
    --it;
    while(it != st.end())
	{
        std::cout << *it << std::endl;
        ++it;
    }
}

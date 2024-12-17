// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<main.cpp>>

#include <iostream>
#include "MutantStack.hpp"

#ifdef LIST_MAIN
# include <list>

int	main(void)
{
	std::list<int>	lst;

	std::cout << "Using std::list<int>\n";

	lst.push_back(5);
	lst.push_back(17);

	std::cout << lst.back() << "\n";

	lst.pop_back();

	std::cout << lst.back() << "\n";

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::list<int>::iterator it = lst.begin();
	std::list<int>::iterator ite = lst.end();

	++it;
	--it;
	while (it != ite)
		std::cout << *it++ << "\n";
	return 0;
}
#else
int	main(void)
{
	MutantStack<int>	mstack;

	std::cout << "Using MutantStack<int>\n";

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << "\n";

	mstack.pop();

	std::cout << mstack.top() << "\n";

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
		std::cout << *it++ << "\n";
	std::stack<int>	s(mstack);
	return 0;
}
#endif

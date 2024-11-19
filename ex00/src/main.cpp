// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<main.cpp>>

#include <list>
#include <vector>
#include <iostream>
#include <easyfind.hpp>

int32_t	main(void)
{
	std::vector<int>	a(5);
	std::list<int>		b(5);

	a.push_back(23);
	a.push_back(42);
	b.push_back(23);
	b.push_front(42);
	if (easyfind(a, 23))
		std::cout << "23 found in vector a\n";
	else
		std::cout << "23 not found in vector a\n";
	if (easyfind(a, 42))
		std::cout << "42 found in vector a\n";
	else
		std::cout << "42 not found in vector a\n";
	if (easyfind(a, 69))
		std::cout << "69 found in vector a\n";
	else
		std::cout << "69 not found in vector a\n";
	if (easyfind(b, 23))
		std::cout << "23 found in list b\n";
	else
		std::cout << "23 not found in list b\n";
	if (easyfind(b, 42))
		std::cout << "42 found in list b\n";
	else
		std::cout << "42 not found in list b\n";
	if (easyfind(b, 69))
		std::cout << "69 found in list b\n";
	else
		std::cout << "69 not found in list b\n";

	return 0;
}

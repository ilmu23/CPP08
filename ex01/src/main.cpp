// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<main.hpp>>

#include "Span.hpp"
#include <iostream>

int32_t	main(void)
{
	Span	s(5);
	i32vec	numbers = {9, 3, 17, 11, 69};
	size_t	i;

	s.addNumber(0);

	try {
		std::cout << "Shortest span: " << s.shortestSpan() << "\n";
	} catch (std::exception &e) {
		std::cout << e.what() << "\n";
	}

	try {
		std::cout << "Longest span: " << s.longestSpan() << "\n";
	} catch (std::exception &e) {
		std::cout << e.what() << "\n";
	}

	try {
		s.addRange(numbers.begin(), numbers.end());
	} catch (std::exception &e) {
		std::cout << "span: " << e.what() << "\n";
	}

	std::cout << "Shortest span: " << s.shortestSpan() << "\n";
	std::cout << "Longest span: " << s.longestSpan() << "\n";

	s = Span(42001);

	for (i = 0, numbers.clear(); i < 42001; i++)
		numbers.push_back(static_cast<int32_t>(i));

	s.addRange(numbers.begin(), numbers.end());

	std::cout << "Shortest span: " << s.shortestSpan() << "\n";
	std::cout << "Longest span: " << s.longestSpan() << "\n";

	return 0;
}

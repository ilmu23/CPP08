// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<MutantStack.hpp>>

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <deque>
# include <stack>

template <typename T, class Cnt = std::deque<T>> class MutantStack: public std::stack<T, Cnt>
{
	public:

		MutantStack(void): std::stack<T, Cnt>() {};
		MutantStack(const MutantStack &copy): std::stack<T, Cnt>(copy) {};
		MutantStack &operator=(const MutantStack &copy) { this->c = copy.c; return *this; };
		~MutantStack(void) {};

		// iterators

		typedef typename Cnt::reverse_iterator	reverse_iterator;
		typedef typename Cnt::iterator			iterator;

		reverse_iterator	rbegin(void) { return this->c.rbegin(); };
		reverse_iterator	rend(void) { return this->c.rend(); };

		iterator			begin(void) { return this->c.begin(); };
		iterator			end(void) { return this->c.end(); };

		// const iterators

		typedef typename Cnt::const_reverse_iterator	const_reverse_iterator;
		typedef typename Cnt::const_iterator			const_iterator;

		const_reverse_iterator	crbegin(void) const { return this->c.crbegin(); };
		const_reverse_iterator	crend(void) const { return this->c.creng(); };

		const_iterator			cbegin(void) const { return this->c.cbegin(); };
		const_iterator			cend(void) const { return this->c.cend(); };
};

#endif

// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<Span.hpp>>

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <cstdint>
# include <exception>

# define i32vec std::vector<int32_t>

class Span
{
	private:

		i32vec	_v;
		int32_t	_max;

	public:

		Span(void) = delete;
		Span(const int32_t &n);
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		~Span(void);

		// misc

		uint32_t	shortestSpan(void) const;
		uint32_t	longestSpan(void) const;
		void		addNumber(const int32_t &n);
		void		addRange(i32vec::iterator begin, i32vec::iterator end);

		// exception

		class OutOfSpaceException: public std::exception {
			public :
				const char	*what(void) const noexcept;
		};

		class NoSpanException: public std::exception {
			public :
				const char	*what(void) const noexcept;
		};
};

#endif

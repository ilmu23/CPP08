// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<Span.hpp>>

#include "Span.hpp"
# include <numeric>
# include <algorithm>

Span::Span(const int32_t &n): _v(), _max(n) {}

Span::Span(const Span &copy): _v(copy._v), _max(copy._max) {}

Span	&Span::operator=(const Span &copy)
{
	this->_max = copy._max;
	this->_v = copy._v;
	return *this;
}

Span::~Span(void) {}

// misc

uint32_t	Span::shortestSpan(void) const
{
	i32vec	tmp(this->_v);

	if (this->_v.size() < 2)
		throw Span::NoSpanException();
	std::sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
	return *std::min_element(++tmp.begin(), tmp.end());
}

uint32_t	Span::longestSpan(void) const
{
	int32_t	min;
	int32_t	max;

	if (this->_v.size() < 2)
		throw Span::NoSpanException();
	min = *std::min_element(this->_v.begin(), this->_v.end());
	max = *std::max_element(this->_v.begin(), this->_v.end());
	return max - min;
}

void	Span::addNumber(const int32_t &n)
{
	if (this->_v.size() == static_cast<size_t>(this->_max))
		throw Span::OutOfSpaceException();
	this->_v.push_back(n);
}

void	Span::addRange(i32vec::iterator begin, i32vec::iterator end)
{
	while (begin != end)
		this->addNumber(*begin++);
}

// exception

const char	*Span::OutOfSpaceException::what(void) const noexcept
{
	return "Span is full";
}

const char	*Span::NoSpanException::what(void) const noexcept
{
	return "No span found";
}

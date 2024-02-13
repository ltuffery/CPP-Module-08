#include "Span.hpp"
#include <cstddef>
#include <stdexcept>

Span::Span()
{
	this->_v = new std::vector<int>(0);
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::Span(unsigned int N)
{
	this->_v = new std::vector<int>(N);
}

Span::~Span()
{
	delete this->_v;
}

Span &Span::operator=(const Span &copy)
{
	if (this == &copy)
		return *this;
	
	this->_v = copy._v;
	
	return *this;
}

void Span::addNumber(int n)
{
	if (this->_v->size() == this->_v->max_size())
	{
		throw std::runtime_error("Contenaire is full");
	}

	if (n > this->_maxInt)
	{
		this->_maxInt = n;
	}
	else if (n < this->_minInt)
	{
		this->_minInt = n;
	}

	this->_v->push_back(n);
}

int Span::shortestSpan()
{
	if (this->_v->size() < 2)
	{
		throw std::runtime_error("Small size");
	}
	
	bool find = false;
	int min = this->_v[0];

	for (size_t i = 0; i < this->_v->size(); i++)
	{
		if (this->_v[i] == this->_minInt && !find)
		{
			find = true;
			continue;
		}


	}

	return 0;
}

int Span::longestSpan()
{
	if (this->_v->size() < 2)
	{
		throw std::runtime_error("Small size");
	}
	
	return this->_minInt - this->_maxInt;
}

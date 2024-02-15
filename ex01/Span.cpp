#include "Span.hpp"
#include <cstddef>
#include <stdexcept>
#include <algorithm>
#include <iostream>

Span::Span() : _N(0)
{
	this->_v = new std::vector<int>(0);
}

Span::Span(const Span &copy) : _N(copy._N)
{
	*this = copy;
}

Span::Span(unsigned int N) : _N(N)
{
	this->_v = new std::vector<int>(0);
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
	if (this->_v->size() == this->_N)
	{
		throw std::runtime_error("Contenaire full");
	}

	this->_v->push_back(n);
}

void Span::addNumbers(int a, int b)
{
	int i = 1;

	if (a < b)
	{
		i = -1;
	}
	while (a != b)
	{
		addNumber(a);
		a += i;
	}
}

int Span::shortestSpan()
{

	if (this->_v->size() < 2)
	{
		throw std::runtime_error("Size");
	}
	
	std::sort(this->_v->begin(), this->_v->end());

	int min = *(this->_v->begin() + 1) - *this->_v->begin();

	for (std::vector<int>::iterator it = this->_v->begin() + 1; it != this->_v->end(); it++)
	{
		if (it + 1 == this->_v->end())
		{
			break;
		}
		if (*(it + 1) - *it < min)
		{
			min = *(it + 1) - *it;
		}
	}
	return min;
}

int Span::longestSpan()
{
	size_t size = this->_v->size();

	if (size < 2)
	{
		throw std::runtime_error("Size");
	}

	return *std::max_element(this->_v->begin(), this->_v->end()) - *std::min_element(this->_v->begin(), this->_v->end());
}

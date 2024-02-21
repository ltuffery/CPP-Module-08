#include "Span.hpp"
#include <exception>
#include <iostream>

int main()
{
	{
		std::cout << "test 1 :" << std::endl;

		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		try {
			sp.addNumber(8);
		} catch(std::runtime_error &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "test 2 :" << std::endl;

		Span sp = Span(5);

		sp.addNumbers(1, 4);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "test 3 :" << std::endl;

		Span sp = Span(5);

		sp.addNumber(-5);
		sp.addNumber(-4);
		sp.addNumber(50);
		sp.addNumber(55);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return 0;
}

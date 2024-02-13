#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span
{

	private:
		std::vector<int> *_v;
		int _maxInt;
		int _minInt;

	public:
		Span();
		Span(unsigned int);
		Span(const Span &);
		~Span();

		Span &operator=(const Span &);

		void addNumber(int);
		void addNumbers(int, int);
		int shortestSpan();
		int longestSpan();

};

#endif

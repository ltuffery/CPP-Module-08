#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdexcept>

template<typename T>
int easyfind(T arr, int n)
{
	for (size_t i = 0; i < arr.size(); i++)
	{
		if (arr[i] == n)
			return i;
	}

	throw std::runtime_error("No occurance find");
}

#endif

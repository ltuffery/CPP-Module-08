#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdexcept>
#include <algorithm>
#include <iostream>

template<typename T>
void easyfind(T arr, int n)
{
	if (std::find(arr.begin(), arr.end(), n) != arr.end())
	{
		std::cout << "I found" << std::endl;
	}
	else
	{
		throw std::runtime_error("No occurance find");
	}
}

#endif

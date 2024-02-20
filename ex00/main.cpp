#include "easyfind.hpp"
#include <cstddef>
#include <exception>
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> arr(0);

	arr.push_back(2);
	arr.push_back(56);
	arr.push_back(8);

	for (size_t i = 0; i < arr.size(); i++)
	{
		std::cout << "arr : " << arr[i] << std::endl;
	}

	try {
		easyfind(arr, 2);
		easyfind(arr, 1);
	} catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
}

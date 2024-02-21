#include "MutantStack.hpp"
#include <iostream>
#include <string>

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	{
		MutantStack<std::string> mstack;
		mstack.push("Hey");
		mstack.push("Hello");
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push("bla...");
		mstack.push("Yes");
		mstack.push("42");
		//[...]
		mstack.push("no...");
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<std::string> s(mstack);
	}
	{
		MutantStack<float> mstack;
		if (mstack.begin() == mstack.end())
		{
			std::cout << "Good" << std::endl;
		}
		else
		{
			std::cout << "Not Good" << std::endl;
		}
	}
	return 0;
}

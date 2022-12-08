#include <iostream>
#include <vector>
#include "funcs.h"

int main()
{
	std::cout << "Task A: " << std::endl;
	std::vector<int> a = makeVector(5);
	for (int i=0; i<a.size(); i++)
	{
		std::cout << a.at(i) << " ";
	}
	std::cout << "\nTask B: " << std::endl;
	std::vector<int> b{1,2,-1,3,4,-1,6};
	std::vector<int> ba = goodVibes(b);
	for (int i=0; i<ba.size(); i++)
	{
		std::cout << ba.at(i) << " ";
	}
	std::cout << "\nTask C: " << std::endl;
	std::vector<int> v1{1,2,3};
	std::vector<int> v2{4,5};
	gogeta(v1, v2);
	std::cout << "Elements of v1: " << std::endl;
	for (int i=0; i<v1.size(); i++)
	{
		std::cout << v1.at(i) << " ";
	}
	std::cout << "\nIs v2 empty: " << v2.empty() << std::endl;
	return 0;
}

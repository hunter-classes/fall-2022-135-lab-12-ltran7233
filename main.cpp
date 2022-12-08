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
	return 0;
}

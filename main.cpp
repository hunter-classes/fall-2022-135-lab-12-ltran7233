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
	std::cout << "\n";
	return 0;
}

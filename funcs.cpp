#include <iostream>
#include <vector>

vector<int> makeVector(int n)
{
	vector<int> v;
	for (int i=0; i<n; i++)
	{
		v.push_back(i);
	}
	return v;
}

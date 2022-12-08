#include <iostream>
#include <vector>

std::vector<int> makeVector(int n)
{
	std::vector<int> v;
	for (int i=0; i<n; i++)
	{
		v.push_back(i);
	}
	return v;
}

std::vector<int> goodVibes(const std::vector<int>& v)
{
	std::vector<int> n;
	for (int i=0; i<v.size(); i++)
	{
		if (v.at(i)>-1)
		{
			n.push_back(v[i]);
		}
	}
	return n;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
	for (int i=0; i<vegeta.size(); i++)
	{
		goku.push_back(vegeta[i]);
	}
	vegeta.clear();
}

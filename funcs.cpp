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

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2)
{
	std::vector<int> sum;
	std::vector<int> big = v1;
	int pair = 0;
	if (v1.size()!=v2.size())
	{
		std::vector<int> small;
		if (v1.size()<v2.size())
		{
			small = v1;
			big = v2;
		}
		else
		{
			small = v2;
			big = v1;
		}
		for (int i=small.size(); i<big.size(); i++)
		{
			small.push_back(0);
		}
	}
	for (int i=0; i<big.size(); i++)
	{
		pair = v1[i] + v2[i];
		sum.push_back(pair);
	}
	return sum;
}

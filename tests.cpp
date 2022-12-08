#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A tests")
{
	std::vector<int> v1 = makeVector(6);
	std::vector<int> v2 = {0,1,2,3,4,5};
	std::vector<int> v3 = makeVector(5);
	CHECK(v1==v2);
	CHECK(v2!=v3);
}

TEST_CASE("Task B tests")
{
	std::vector<int> v1{-1,0,3,6,-5,8,2,3};
	std::vector<int> v2 = goodVibes(v1);
	std::vector<int> v3{0,3,6,8,2,3};
	CHECK(v2==v3);
	CHECK(v1!=v3);
}

TEST_CASE("Task C tests")
{
	std::vector<int> v1 = {2,6,5};
	std::vector<int> v2 = {1,7,9};
	std::vector<int> v3 = {1,7,9,2,6,5};
	gogeta(v2,v1);
	CHECK(v2==v3);
	CHECK(v1.empty());
}

TEST_CASE("Task D tests")
{
	std::vector<int> v1 = {1,2};
	std::vector<int> v2 = {4,5,8};
	std::vector<int> v3 = {5,7,8};
	std::vector<int> v4 = sumPairWise(v1,v2);
	CHECK(v3==v4);
}

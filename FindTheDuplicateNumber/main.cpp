#include <iostream>
#include <vector>
#include "Solution.hpp"

int main()
{
	std::vector<int> v1 = {1, 3, 4, 2, 2};
	Solution s1;

	std::cout << s1.findDuplicate(v1);

	return 0;
}
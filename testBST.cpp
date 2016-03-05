#include "bst.hpp"
#include <algorithm>
#include <random>

int main()
{
	// 
	std::cout << "create a BST ..." << std::endl;
	std::vector<int> nums = {8,1,3,6,4,7,10,14,13};
	BST<int> bt(nums);

	std::cout << "print out the BST ..." << std::endl;
	std::cout << "BST: ";
	bt.print();
    std::sort(nums.begin(),nums.end());
	std::cout << "ORG: ";
	for (auto x: nums) std::cout << x << " ";
	std::cout << std::endl;

	// insert
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1,100);
	for (int i = 0;i < 10;++ i)
	{
		int r = distribution(generator);
		bt.insert(r);
		std::cout << "After insert " << r << ": ";
		bt.print();
	}

	// query
	std::uniform_int_distribution<int> dist2(1,nums.size());
	int q = nums[dist2(generator) - 1];
	std::cout << "Is " << q << " in the BST: " << bt.search(q) << std::endl;

    q = 120;
	std::cout << "Is " << q << " in the BST: " << bt.search(q) << std::endl;




	return 0;
}

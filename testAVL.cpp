#include "avl_tree.hpp"

int main()
{
	std::cout << "create a AVL Tree ..." << std::endl;
	std::vector<int> nums = {8,1,3,6,4,7,10,14,13};
	AVL_Tree<int> avlTree(nums);	
}
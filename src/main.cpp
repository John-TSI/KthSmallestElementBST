// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

#include<iostream>
#include"../inc/solution.hpp"


int main()
{
	TreeNode n6(1);
	TreeNode n5(4);
	TreeNode n4(2, &n6, nullptr);
	TreeNode n3(6);
	TreeNode n2(3, &n4, &n5);
	TreeNode root(5, &n2, &n3);

	std::cout << Solution().kthSmallest(&root,3);  // 3
	//std::cout << Solution().kthSmallest(&root,6);  // 6
	return 0;
}


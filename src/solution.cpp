#include"../inc/solution.hpp"


// idea: inorder traversal of the BST, decrementing a counter. upon reaching 0, kth smallest node has been reached
int Solution::kthSmallest(TreeNode* root, int k)
{
    static int count{k};  // static declaration to persist value across recursive calls
    if(!root){ return -1; }  // base cases: empty tree / nullptr 'child' of leaf node

    int leftVal = kthSmallest(root->left, k);  // recursive call on root of left subtree
    if(leftVal >= 0){ return leftVal; }  // problem specifies node values >= 0

    // desired node not found in left subtree, now consider the node itself and decrement counter
    if( !(--count) ){ return root->val; }

    return kthSmallest(root->right, k);  // last step of inorder traversal: consider right subtree of current root
}
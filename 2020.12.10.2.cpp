#include<iostream>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (root == NULL)
			return 0;

		int leftDepth = maxDepth(root->left);
		int rightDepth = maxDepth(root->right);

		return leftDepth>rightDepth ? leftDepth + 1 : rightDepth + 1;
	}
	bool isBalanced(TreeNode* root) {
		if (root == NULL)
			return true;

		int leftDepth = maxDepth(root->left);
		int rightDepth = maxDepth(root->right);

		return abs(leftDepth - rightDepth) <= 1 && isBalanced(root->left) && isBalanced(root->right);
	}
};
int main()
{
	return 0;
}
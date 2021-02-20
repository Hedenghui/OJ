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
	bool _isSymmetric(TreeNode* left, TreeNode* right)
	{
		if (left == NULL&&right == NULL)
			return true;
		if (left == NULL || right == NULL)
			return false;
		if (left->val != right->val)
			return false;

		return _isSymmetric(left->right, right->left) && _isSymmetric(left->left, right->right);
	}
	bool isSymmetric(TreeNode* root) {
		return _isSymmetric(root->left, root->right);
	}
};
int main()
{
	return 0;
}
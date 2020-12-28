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
	bool solve(TreeNode* root, long long min, long long max)
	{
		if (root == NULL)
			return true;

		if (root->val <= min || root->val >= max)
			return false;

		return solve(root->left, min, root->val) && solve(root->right, root->val, max);
	}
	bool isValidBST(TreeNode* root) {
		return solve(root, LONG_MIN, LONG_MAX);
	}
};
int main()
{
	return 0;
}
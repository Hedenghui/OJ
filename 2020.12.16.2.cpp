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
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (!root)
		{
			return NULL;
		}
		if (p == root)
			return root;
		if (q == root)
			return root;

		TreeNode* left = lowestCommonAncestor(root->left, p, q);
		TreeNode* right = lowestCommonAncestor(root->right, p, q);

		if (!left)
			return right;
		if (!right)
			return left;
		if (right&&left)
			return root;

		return NULL;

	}
};
int main()
{
	return 0;
}
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

	TreeNode* mirrorTree(TreeNode* root) {
		if (root == NULL)
			return NULL;

		TreeNode* node = root->left;
		root->left = root->right;
		root->right = node;

		mirrorTree(root->left);
		mirrorTree(root->right);

		return root;
	}
};
//int main()
//{
//	return 0;
//}
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
	TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
		if (p->right)
		{
			p = p->right;
			while (p->left)
			{
				p = p->left;
			}
			return p;
		}
		TreeNode* ret = NULL;
		while (root != p)
		{
			if (root->val<p->val)
				root = root->right;
			else
			{
				ret = root;
				root = root->left;
			}
		}
		return ret;
	}
};
//int main()
//{
//	return 0;
//}
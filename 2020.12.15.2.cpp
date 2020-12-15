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
		TreeNode* node = root;
		if (p->val>q->val)
		{
			TreeNode* h = q;
			q = p;
			p = h;
		}
		while (node)
		{
			if (node->val>q->val)
			{
				node = node->left;
			}
			else if (node->val<p->val)
			{
				node = node->right;
			}
			else
				return node;
		}
		return  NULL;
	}
};
int main()
{
	return 0;
}
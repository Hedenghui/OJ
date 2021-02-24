#include<iostream>
using namespace std;
#include<vector>
struct TreeNode {
	int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
	void flatten(TreeNode* root) {
		vector<TreeNode*> l;
		qianxu(root, l);
		int size = l.size();
		for (int i = 1; i<size; i++)
		{
			TreeNode *prev = l.at(i - 1), *curr = l.at(i);
			prev->left = nullptr;
			prev->right = curr;
		}
	}
	void qianxu(TreeNode* root, vector<TreeNode*>& l)
	{
		if (root != NULL)
		{
			l.push_back(root);
			qianxu(root->left, l);
			qianxu(root->right, l);
		}
	}
};
int main()
{
	return 0;
}

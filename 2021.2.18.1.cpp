#include<iostream>
using namespace std;
#include<vector>
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution{
public:
	vector<int> ret;
	vector<int> inorderTraversal(TreeNode* root)
	{
		if (root)
		{
			inorderTraversal(root->left);
			ret.push_back(root->val);
			inorderTraversal(root->right);
		}

		return ret;
	}
};
int main()
{
	return 0;
}
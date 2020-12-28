#include<iostream>
using namespace std;
#include<algorithm>
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int length(TreeNode* root)
	{
		if (root == NULL)
		{
			return 0;
		}
		else
			return max(length(root->left), length(root->right)) + 1;
	}
	bool isBalanced(TreeNode* root) {
		if (root == NULL)
			return true;
		else
			return abs(length(root->left) - length(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);

	}
};
int main()
{
	return 0;
}
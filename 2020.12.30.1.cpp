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

	int i = 0;//¸öÊý
	void equal(TreeNode* root, int sum)
	{
		if (root == NULL)
			return;

		sum -= root->val;
		if (sum == 0)
		{
			i++;
		}
		equal(root->left, sum);
		equal(root->right, sum);
	}
	void next(TreeNode* root, int sum)
	{
		if (root == NULL)
			return;

		equal(root, sum);
		next(root->left, sum);
		next(root->right, sum);
	}
	int pathSum(TreeNode* root, int sum) {
		next(root, sum);
		return i;
	}
};
int main()
{
	return 0;
}
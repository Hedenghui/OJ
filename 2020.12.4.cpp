#include<iostream>
using namespace std;
#include<vector>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	vector<vector<int>> vv;
	vector<int> v;
	void equal(TreeNode* root, int sum)
	{
		if (root == NULL)
			return;
		v.push_back(root->val);
		sum -= root->val;
		if (sum == 0 && root->left == NULL&&root->right == NULL)
			vv.push_back(v);

		equal(root->left, sum);
		equal(root->right, sum);
		v.pop_back();
	}
	vector<vector<int>> pathSum(TreeNode* root, int sum) {
		equal(root, sum);
		return vv;
	}
};
//int main()
//{
//	return 0;
//}
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
	vector<int> v;
	void zhongxu(TreeNode* root)
	{
		if (root)
		{
			isValidBST(root->left);
			v.push_back(root->val);
			isValidBST(root->right);
		}

	}
	bool isValidBST(TreeNode* root) {
		zhongxu(root);
		for (int i = 1; i < v.size(); i++) {
			// 注意要小于等于，搜索树里不能有相同元素
			if (v[i] <= v[i - 1]) return false;
		}
		return true;

	}
};
int main()
{
	return 0;
}
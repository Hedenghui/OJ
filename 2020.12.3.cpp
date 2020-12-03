#include<iostream>
using namespace std;
#include<vector>
#include<queue>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> vv;
		queue<TreeNode *> q;
		if (root == NULL)
		{
			return vv;
		}
		q.push(root);
		while (!q.empty())
		{
			int size = q.size();
			vector<int> v;
			while (size--)
			{
				TreeNode*node = q.front();
				v.push_back(node->val);
				q.pop();
				if (node->left)
					q.push(node->left);
				if (node->right)
					q.push(node->right);
			}
			vv.push_back(v);
		}
		return vv;
	}
};
//int main()
//{
//	return 0;
//}
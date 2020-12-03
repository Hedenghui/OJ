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
			return vv;
		q.push(root);
		int n = 0;
		while (!q.empty())
		{
			n += 1;
			int size = q.size();
			vector<int> v;
			while (size--)
			{
				TreeNode*node = q.front();
				v.push_back(q.front()->val);
				q.pop();
				if (node->left)
					q.push(node->left);
				if (node->right)
					q.push(node->right);
			}
			if (n % 2 == 0)
			{
				reverse(v.begin(), v.end());
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
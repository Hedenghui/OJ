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
	vector<int> levelOrder(TreeNode* root) {
		vector<int> v;
		queue<TreeNode*> q;
		if (root == NULL)
			return v;
		q.push(root);
		while (!q.empty())
		{
			TreeNode* node = q.front();
			v.push_back(q.front()->val);
			q.pop();
			if (node->left)
				q.push(node->left);
			if (node->right)
				q.push(node->right);
		}
		return v;

	}
};

int main()
{
	return 0;
}
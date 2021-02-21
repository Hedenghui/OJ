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
class Solution{
public:
	vector<vector<int>> levelOrder(TreeNode* root)
	{
		vector<vector<int>> vv;
		queue<TreeNode*> q;
		if (root)
			q.push(root);
		while (!q.empty())
		{
			vector<int> v;
			int size = q.size();
			while (size--)
			{
				TreeNode* rooti = q.front();
				q.pop();
				v.push_back(rooti->val);
				if (rooti->left)
					q.push(rooti->left);
				if (rooti->right)
					q.push(rooti->right);
			}
			vv.push_back(v);
		}
		return vv;
	}
};
int main()
{
	return 0;
}
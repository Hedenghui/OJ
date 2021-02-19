#include<iostream>
using namespace std;
#include<vector>
#include<stack>
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};

class Solution{
public:
	vector<int> inorderTraversal(TreeNode* root)
	{
		vector<int> v;
		stack<TreeNode*> s;
		TreeNode* node = root;
		while (node || s.size())
		{
			while (node)
			{
				s.push(node);
				node = node->left;
			}
			node = s.top();
			s.pop();
			v.push_back(node->val);
			node = node->right;
		}
		return v;
	}
};
int main()
{
	return 0;
}
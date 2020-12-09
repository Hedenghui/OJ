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
	vector<int> ret;
	vector<int> inorderTraversal(TreeNode* root) {
		if (root)
		{
			inorderTraversal(root->left);
			ret.push_back(root->val);
			inorderTraversal(root->right);
		}
		return ret;
	}
	//·ÇµÝ¹é
	// vector<int> inorderTraversal(TreeNode* root) {
	//     vector<int> ret;
	//     stack<TreeNode*>st;

	//     TreeNode* cur=root;
	//     while(cur||!st.empty())
	//     {
	//         while(cur)
	//         {

	//             st.push(cur);
	//             cur=cur->left;

	//         }
	//         TreeNode* top=st.top();
	//         st.pop();
	//         ret.push_back(top->val);
	//         cur=top->right;
	//     }
	//     return ret;

	// }
	int kthLargest(TreeNode* root, int k) {
		vector<int> v;
		v = inorderTraversal(root);
		int n = v.size();
		while (k--)
		{
			n--;
		}
		return v[n];

	}
};
int main()
{
	return 0;
}
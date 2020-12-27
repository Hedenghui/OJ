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
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		return dfs(nums, 0, nums.size() - 1);
	}
	TreeNode* dfs(vector<int>& nums, int L, int R)
	{
		if (L>R)
		{
			return nullptr;
		}
		int mid = (L + R) / 2;
		TreeNode* parent = new TreeNode(nums[mid]);
		parent->left = dfs(nums, L, mid - 1);//×ó×ÓÊ÷
		parent->right = dfs(nums, mid + 1, R);//ÓÒ×ÓÊ÷
		return parent;
	}
};
int main()
{
	return 0;
}
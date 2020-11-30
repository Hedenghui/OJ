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
	bool right(TreeNode* A, TreeNode* B)
	{
		if (B == NULL)
			return true;
		if (A == NULL || A->val != B->val)
			return false;
		return right(A->left, B->left) && right(A->right, B->right);
	}
	bool isSubStructure(TreeNode* A, TreeNode* B) {
		return (A != NULL&&B != NULL) && (right(A, B) || isSubStructure(A->left, B) || isSubStructure(A->right, B));
	}
};
int main()
{
	return 0;
}
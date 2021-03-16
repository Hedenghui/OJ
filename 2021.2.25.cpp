#include<iostream>
using namespace std;
#include<algorithm>

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
	
};

class Solution {
private:
	int maxSum = INT_MIN;

public:
	int maxGain(TreeNode* node) {
		if (node == nullptr) {
			return 0;
		}

		// �ݹ���������ӽڵ�������ֵ
		// ֻ���������ֵ���� 0 ʱ���Ż�ѡȡ��Ӧ�ӽڵ�
		int leftGain = max(maxGain(node->left), 0);
		int rightGain = max(maxGain(node->right), 0);

		// �ڵ�����·����ȡ���ڸýڵ��ֵ��ýڵ�������ӽڵ�������ֵ
		int priceNewpath = node->val + leftGain + rightGain;

		// ���´�
		maxSum = max(maxSum, priceNewpath);

		// ���ؽڵ�������ֵ
		return node->val + max(leftGain, rightGain);
	}

	int maxPathSum(TreeNode* root) {
		maxGain(root);
		return maxSum;
	}
};
int main()
{
	return 0;
}
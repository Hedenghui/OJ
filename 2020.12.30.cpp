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
	bool selet(TreeNode* t1, TreeNode* t2)
	{
		if (t2 == NULL)
			return true;
		if (t1 == NULL || t1->val != t2->val)
			return false;

		return selet(t1->left, t2->left) && selet(t1->right, t2->right);//��t1->val��t2->val���ʱ������
	}
	bool checkSubTree(TreeNode* t1, TreeNode* t2) {
		return (t1&&t2) && (selet(t1, t2) || checkSubTree(t1->left, t2) || checkSubTree(t1->right, t2));//���t1����t2�����ھ�false
	}

};
//int main()
//{
//	return 0;
//}
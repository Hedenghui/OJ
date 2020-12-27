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

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	vector<ListNode*> listOfDepth(TreeNode* tree) {
		q.push(tree);
		while (!q.empty())
		{
			ListNode* first = new ListNode(0);
			ListNode* edg = first;
			for (int i = q.size(); i>0; i--)
			{
				TreeNode* p = q.front();
				q.pop();
				edg->next = new ListNode(p->val);
				edg = edg->next;
				if (p->left)
					q.push(p->left);
				if (p->right)
					q.push(p->right);
			}
			v.push_back(first->next);
		}
		return v;
	}
	vector<ListNode*> v;
	queue<TreeNode*> q;
};
int main()
{
	return 0;
}
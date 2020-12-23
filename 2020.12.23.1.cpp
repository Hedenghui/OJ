#include<iostream>
using namespace std;
#include<vector>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	void specialsort(vector<ListNode*>& vv, int x)
	{
		int less = -1;
		for (int i = 0; i<vv.size(); i++)
		{
			if (vv[i]->val<x)
			{
				swap(vv[i], vv[++less]);
			}
		}
	}
	ListNode* partition(ListNode* head, int x) {
		if (head == NULL || head->next == NULL)
			return head;

		vector<ListNode*> v;
		while (head)
		{
			v.push_back(head);
			head = head->next;
		}
		specialsort(v, x);

		int i = 0;
		while (i<v.size() - 1)
		{
			v[i]->next = v[i + 1];
			i++;
		}
		v[i]->next = NULL;
		return v[0];
	}
};
int main()
{
	return 0;
}
#include<iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* res = new ListNode(0);
		ListNode* cur = res;
		ListNode* node1 = l1;
		ListNode* node2 = l2;

		while (node1&&node2)
		{
			if (node1->val<node2->val)
			{
				cur->next = node1;
				node1 = node1->next;
				cur = cur->next;
			}
			else
			{
				cur->next = node2;
				node2 = node2->next;
				cur = cur->next;
			}
		}
		if (node1)
		{
			cur->next = node1;
		}
		if (node2)
		{
			cur->next = node2;
		}
		return res->next;
	}
};
int main()
{
	return 0;
}
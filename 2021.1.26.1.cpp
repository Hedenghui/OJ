#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* a1 = l1;
		ListNode* a2 = l2;
		ListNode* start = new ListNode(-1);
		ListNode* ret = start;
		while (a1 != NULL&&a2 != NULL)
		{
			if (a1->val>a2->val)
			{
				ListNode* newnode = new ListNode(a2->val);
				ret->next = newnode;
				ret = newnode;
				a2 = a2->next;
			}
			else
			{
				ListNode* newnode = new ListNode(a1->val);
				ret->next = newnode;
				ret = newnode;
				a1 = a1->next;
			}


		}
		if (a2 != NULL)
		{
			ret->next = a2;
		}
		if (a1 != NULL)
		{
			ret->next = a1;
		}
		return start->next;
	}
};
int main()
{
	return 0;
}
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		ListNode* node1 = headA;
		ListNode* node2 = headB;
		while (node1 != node2)
		{
			if (node1 == NULL)
				node1 = headB;
			else
				node1 = node1->next;

			if (node2 == NULL)
				node2 = headA;
			else
				node2 = node2->next;
		}
		return node1;

	}
};
int main()
{
	return 0;
}
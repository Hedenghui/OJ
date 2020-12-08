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
		ListNode* node1;
		ListNode* node2;
		node1 = headA;
		node2 = headB;
		while (node1 != node2)
		{
			node1 = node1 != NULL ? node1->next : node1 = headB;
			node2 = node2 != NULL ? node2->next : node2 = headA;
		}
		return node1;
	}
};
int main()
{
	return 0;
}
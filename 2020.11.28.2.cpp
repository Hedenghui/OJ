#include<iostream>
using namespace std;

struct ListNode {
    int val;
	ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* deleteNode(ListNode* head, int val) {
		ListNode* node = head;
		while (node != NULL)
		{
			if (node->val == val)
			{
				head = head->next;
				break;
			}

			if (node->next->val == val)
			{
				node->next = node->next->next;
				break;
			}
			node = node->next;
		}
		return head;
	}
};
int main()
{
	return 0;
}
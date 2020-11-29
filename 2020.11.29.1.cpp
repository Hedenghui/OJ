#include<iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* getKthFromEnd(ListNode* head, int k) {
		ListNode* node = head;
		ListNode* end = head;

		while (--k)
		{
			node = node->next;
		}
		while (node->next)
		{
			node = node->next;
			end = end->next;
		}
		return end;
	}
};
int main()
{
	return 0;
}
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	void deleteNode(ListNode* node) {
		ListNode* next = node->next;
		ListNode* prev = node;
		while (next)
		{
			prev = node;
			node->val = next->val;
			node = next;
			next = next->next;
		}
		prev->next = NULL;

	}
};
int main()
{
	return 0;
}
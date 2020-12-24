#include<iostream>
using namespace std;

//a=c+(n-1)(b+c)

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode *detectCycle(ListNode *head) {
		if (head == NULL)
			return NULL;
		ListNode* low = head;
		ListNode* fast = head;

		while (fast->next&&fast->next->next)
		{

			low = low->next;
			fast = fast->next->next;
			if (low == fast)
			{
				ListNode* ret = head;
				while (ret != low)
				{
					ret = ret->next;
					low = low->next;
				}
				return ret;
			}
		}
		return NULL;

	}
};
int main()
{
	return 0;
}
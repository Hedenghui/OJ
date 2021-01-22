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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* begin = new ListNode(-1);
		ListNode* temp = begin;
		int sum = 0;
		bool ret = false;
		while (l1 || l2)
		{
			sum = 0;
			if (l1)
			{
				sum += l1->val;
				l1 = l1->next;
			}
			if (l2)
			{
				sum += l2->val;
				l2 = l2->next;
			}
			if (ret)
			{
				sum += 1;
			}
			temp->next = new ListNode(sum % 10);
			temp = temp->next;
			if (sum / 10 >= 1)
				ret = true;
			else
				ret = false;
		}
		if (ret)
		{
			temp->next = new ListNode(1);
		}
		return begin->next;
	}
};
int main()
{
	return 0;
}
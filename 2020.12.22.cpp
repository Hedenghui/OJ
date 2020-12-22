#include<iostream>
using namespace std;
#include<unordered_map>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	unordered_map<int, int> um;
	ListNode* removeDuplicateNodes(ListNode* head) {
		ListNode* left = head;
		ListNode* right = head;

		while (right)
		{
			if (um[right->val] == 0)
			{
				um[right->val]++;
				left = right;
				right = right->next;
			}
			else if (um[right->val] == 1)
			{
				left->next = right->next;
				right = left->next;
			}
		}
		return head;
	}
};
int main()
{
	return 0;
}
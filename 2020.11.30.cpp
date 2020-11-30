#include<iostream>
using namespace std;
#include<stack>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* reverseList(ListNode* head) {

		ListNode* Node = head;
		stack<int> s;
		while (Node)
		{
			s.push(Node->val);
			Node = Node->next;
		}
		Node = head;
		while (!s.empty())
		{
			Node->val = s.top();
			Node = Node->next;
			s.pop();
		}
		return head;

	}
};
int main()
{
	return 0;
}
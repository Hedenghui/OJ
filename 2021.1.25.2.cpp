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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* begin = new ListNode(0);
		begin->next = head;
		ListNode* slow = begin;
		ListNode* fast = begin;
		while (n--) {
			fast = fast->next;
		}
		fast = fast->next; // fast����ǰ��һ������Ϊ��Ҫ��slowָ��ɾ���ڵ����һ���ڵ�
		while (fast != NULL) {
			fast = fast->next;
			slow = slow->next;
		}
		slow->next = slow->next->next;
		return begin->next;
	}
};
int main()
{
	return 0;
}
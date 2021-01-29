#include<iostream>
using namespace std;
#include<vector>
#include<queue>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	struct cmp{
		bool operator()(ListNode *a, ListNode *b){
			return a->val > b->val;
		}
	};
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		priority_queue<ListNode*, vector<ListNode*>, cmp> pri_queue;
		// ������СΪk��С����
		for (auto e : lists){
			if (e) //[[]]�������
				pri_queue.push(e);
		}
		// ����ʹ���ƽڵ�
		ListNode *begin = new ListNode(-1);
		ListNode *p = begin;
		// ��ʼ����
		while (!pri_queue.empty()){
			ListNode* top = pri_queue.top();
			pri_queue.pop();
			p->next = top;
			p = p->next;
			if (top->next)
				pri_queue.push(top->next);
		}
		return begin->next;
	}

};
int main()
{
	return 0;
}
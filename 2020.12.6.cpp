#include<iostream>
using namespace std;
#include<unordered_map>
class Node {
public:
int val;
Node* next;
Node* random;

Node(int _val) {
val = _val;
next = NULL;
random = NULL;
}
};

class Solution {
public:
	Node* copyRandomList(Node* head) {
		if (head == NULL)
			return NULL;

		unordered_map<Node*, Node*> um;

		Node* cur = head;
		while (cur != NULL)
		{
			um[cur] = new Node(cur->val);
			cur = cur->next;
		}
		cur = head;
		while (cur != NULL)
		{
			um[cur]->next = um[cur->next];
			um[cur]->random = um[cur->random];
			cur = cur->next;
		}
		return um[head];
	}
};
int main()
{
	return 0;
}
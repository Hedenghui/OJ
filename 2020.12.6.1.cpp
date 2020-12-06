#include<iostream>
using namespace std;

class Node {
public:
int val;
Node* left;
Node* right;

Node() {}

Node(int _val) {
val = _val;
left = NULL;
right = NULL;
}

Node(int _val, Node* _left, Node* _right) {
val = _val;
left = _left;
right = _right;
}
};

class Solution {
public:
	Node* head;
	Node* tail;
	Node* treeToDoublyList(Node* root) {
		if (root == NULL)
			return NULL;

		test(root);
		head->left = tail;
		tail->right = head;
		return head;
	}
	void test(Node* root)
	{
		if (root == NULL)
			return;

		test(root->left);

		if (tail == NULL)
			head = root;
		else
		{
			tail->right = root;
			root->left = tail;
		}
		tail = root;
		test(root->right);
	}
};
int main()
{
	return 0;
}
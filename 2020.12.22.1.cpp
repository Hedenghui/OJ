#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// class Solution {
// public:
//     int kthToLast(ListNode* head, int k) {
//         ListNode* left=head;
//         ListNode* right=head;

//         while(--k+1)
//         {
//             right=right->next;
//         }
//         while(right)
//         {
//             left=left->next;
//             right=right->next;
//         }
//         return left->val;
//     }
// };
//¿´Ìâ¿â--µİ¹é·¨
class Solution {
public:
	int key = 0;
	int kthToLast(ListNode* head, int k) {
		if (head == NULL)
			return 0;

		int ret = kthToLast(head->next, k);
		++key;
		if (key<k)
			return 0;
		else if (key == k)
			return head->val;
		else
			return ret;
	}
};
int main()
{
	return 0;
}
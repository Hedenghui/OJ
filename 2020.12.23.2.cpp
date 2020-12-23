#include<iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//这是自己想的思路，但是不能全部通过
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         long long num1=0,num2=0;
//         int i=0,j=0;
//         while(l1)
//         {
//             num1+=(l1->val)*(pow(10,i++));
//             l1=l1->next;
//         }
//         while(l2)
//         {
//             num2+=(l2->val)*(pow(10,j++));
//             l2=l2->next;
//         }
//         long long sum=num1+num2;

//         vector<ListNode*> v;
//         while(sum/10)
//         {
//             ListNode* node=new ListNode(sum%10);
//             v.push_back(node);
//             sum/=10;
//         }
//         ListNode* node1=new ListNode(sum);
//         v.push_back(node1);
//         int h=0;
//         while(h<v.size()-1)
//         {
//             v[h]->next=v[h+1];
//             h++;
//         }
//         v[h]->next=NULL;
//         return v[0];
//     }
// };


class Solution
{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* node = new ListNode(0);
		ListNode* y1 = l1;
		ListNode* y2 = l2;
		ListNode* p = node;
		int ret = 0, sum = 0;//进位，sum为0
		while (y1 || y2 || ret)
		{
			sum = 0;
			if (y1)
			{
				sum += y1->val;
				y1 = y1->next;
			}
			if (y2)
			{
				sum += y2->val;
				y2 = y2->next;
			}
			sum += ret;
			ListNode* newnode = new ListNode(sum % 10);
			node->next = newnode;
			node = newnode;
			ret = sum / 10;
		}
		return p->next;
	}
};
int main()
{
	return 0;
}
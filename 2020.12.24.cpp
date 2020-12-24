#include<iostream>
using namespace std;
#include<vector>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	bool isPalindrome(ListNode* head) {
		vector<int> v;
		ListNode* node = head;
		while (node)
		{
			v.push_back(node->val);
			node = node->next;
		}
		int i = 0;
		int j = v.size() - 1;
		while (i<j)
		{
			if (v[i] != v[j])
				return false;
			i++;
			j--;
		}
		return true;
	}
};
int main()
{
	return 0;
}
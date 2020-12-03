#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	bool DFS(int begin, int end, vector<int>& postorder)
	{
		if (begin >= end)
			return true;

		int root = postorder[end];
		int front = begin;
		while (postorder[front]<root)
			front++;

		for (int i = front; i<end; i++)
		{
			if (postorder[i] <= root)
				return false;
		}
		return DFS(begin, front - 1, postorder) && DFS(front, end - 1, postorder);
	}
	bool verifyPostorder(vector<int>& postorder) {
		if (postorder.size()<2)
			return true;
		return DFS(0, postorder.size() - 1, postorder);
	}
};

int main()
{
	return 0;
}
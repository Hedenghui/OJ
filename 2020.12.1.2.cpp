#include<iostream>
using namespace std;
#include<vector>
#include<stack>
class Solution {
public:
	bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
		stack<int> s;
		for (int i = 0, j = 0; i<pushed.size(); i++)
		{
			s.push(pushed[i]);
			while ((j<pushed.size()) && (s.top() == popped[j]))
			{
				j++;
				s.pop();
				if (s.empty())
					break;
			}
		}
		if (!s.empty())
			return false;

		return true;
	}
};

int main()
{
	return 0;
}
#include<iostream>
using namespace std;
#include<stack>
#include<algorithm>
class Solution {
public:
	int longestValidParentheses(string s) {
		int sum = 0;
		stack<int> st;
		st.push(-1);//解决开始就是')'
		for (int i = 0; i<s.size(); i++)
		{
			if (s[i] == '(')
				st.push(i);
			else
			{
				st.pop();
				if (st.empty())
					st.push(i);
				else
					sum = max(sum, i - st.top());
			}
		}
		return sum;
	}
};
int main()
{
	return 0;
}
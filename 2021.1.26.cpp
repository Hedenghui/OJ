#include<iostream>
using namespace std;
#include<stack>
class Solution {
public:
	bool isValid(string s) {
		stack<char> st;
		int size = s.size();
		for (int i = 0; i<size; i++)
		{
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			{
				st.push(s[i]);
			}
			else if (s[i] == ')')
			{
				if (st.empty())
					return false;
				char top = st.top();
				st.pop();
				if (top != '(')
					return false;
			}
			else if (s[i] == ']')
			{
				if (st.empty())
					return false;
				char top = st.top();
				st.pop();
				if (top != '[')
					return false;
			}
			else if (s[i] == '}')
			{
				if (st.empty())
					return false;
				char top = st.top();
				st.pop();
				if (top != '{')
					return false;
			}
		}
		bool ret = st.empty();
		return ret;
	}
};
int main()
{
	return 0;
}
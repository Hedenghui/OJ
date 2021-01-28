#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	vector<string> generateParenthesis(int n) {
		vector<string> v;
		int a = 0, b = 0;
		string s = "";
		dfs(v, s, n, a, b);
		return v;
	}
	void dfs(vector<string>& v, string s, int n, int a, int b)
	{
		if (b>a || a>n || b>n)
			return;
		if (a == b&&a == n)
		{
			v.push_back(s);
			return;
		}
		dfs(v, s + '(', n, a + 1, b);
		dfs(v, s + ')', n, a, b + 1);
	}
};
int main()
{
	return 0;
}
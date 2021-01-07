#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	vector<string> ret;
	vector<string> generateParenthesis(int n) {
		string s;
		s += '(';
		dfs(n, 1, 0, s);
		return ret;
	}
	void dfs(int n, int l, int r, string s)
	{
		if (l>n || l<r)
			return;
		if (l == n&&l == r)
		{
			ret.push_back(s);
			return;
		}
		if (l<n)
		{
			s += '(';
			dfs(n, l + 1, r, s);
			s.pop_back();
		}
		if (l>r)
		{
			s += ')';
			dfs(n, l, r + 1, s);
			s.pop_back();
		}
	}
};
int main()
{
	return 0;
}
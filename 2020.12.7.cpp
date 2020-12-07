#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
class Solution {
public:
	vector<string> res;
	void show(string s, string temp, vector<bool> v)
	{
		if (temp.size() == s.size())
		{
			res.push_back(temp);
			return;
		}
		for (int i = 0; i<s.size(); i++)
		{
			if (i>0 && s[i] == s[i - 1] && !v[i - 1])
				continue;
			if (!v[i])
			{
				temp.push_back(s[i]);
				v[i] = true;
				show(s, temp, v);
				v[i] = false;
				temp.pop_back();
			}
		}
	}
	vector<string> permutation(string s) {
		if (s.empty())
			return res;

		sort(s.begin(), s.end());
		string temp = "";
		vector<bool> v(s.size());
		show(s, temp, v);
		return res;
	}
};
int main()
{
	return 0;
}
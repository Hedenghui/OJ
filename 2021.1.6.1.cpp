#include<iostream>
using namespace std;
#include<vector>
#include<string>
class Solution {
public:
	vector<string> permutation(string S) {
		vector<string> v;
		vector<int> ret(S.size(), 0);
		int size = S.size();
		string s;
		fun(S, v, ret, s, size);
		return v;
	}
	void fun(string S, vector<string>& v, vector<int>& ret, string s, int size)
	{
		if (s.size() == size)
		{
			v.push_back(s);
			return;
		}
		else
		{
			for (int i = 0; i<size; i++)
			{
				if (!ret[i])
				{
					s.push_back(S[i]);
					ret[i] = 1;
					fun(S, v, ret, s, size);
					s.pop_back();
					ret[i] = 0;
				}
			}
		}
	}
};
int main()
{
	return 0;
}
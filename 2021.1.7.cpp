#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	vector<string> v;
	vector<string> permutation(string S) {
		int size = S.size();
		string s;
		sort(S.begin(), S.end());
		vector<bool> vb(size, false);
		fun(S, s, vb, size);
		return v;
	}
	void fun(string S, string s, vector<bool>& vb, int size)
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
				if (vb[i] == true)
					continue;
				if (i>0 && S[i - 1] == S[i] && vb[i - 1] == false)
					continue;

				s.push_back(S[i]);
				vb[i] = true;
				fun(S, s, vb, size);
				s.pop_back();
				vb[i] = false;

			}
		}
	}
};
//int main()
//{
//	return 0;
//}
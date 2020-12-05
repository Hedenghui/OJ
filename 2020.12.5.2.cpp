#include<iostream>
using namespace std;
#include<map>
class Solution {
public:
	char firstUniqChar(string s) {
		char a = ' ';
		if (s.empty())
			return a;
		map<char, int> m;
		for (int i = 0; i<s.size(); i++)
		{
			m[s[i]]++;
		}
		string s1;
		for (auto e : m)
		{
			if (e.second == 1)
				s1 += e.first;
		}
		for (int i = 0; i<s.size(); i++)
		{
			for (int j = 0; j<s1.size(); j++)
			{
				if (s[i] == s1[j])
				{
					return s[i];
					break;
				}
			}
		}
		return ' ';
	}
};
int main()
{
	return 0;
}
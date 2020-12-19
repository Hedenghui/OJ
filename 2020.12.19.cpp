#include<iostream>
using namespace std;
#include<unordered_map>
class Solution {
public:
	bool CheckPermutation(string s1, string s2) {
		unordered_map<char, int> um;
		for (auto e : s1)
		{
			um[e]++;
		}
		for (auto v : s2)
		{
			um[v]--;
		}
		for (auto h : um)
		{
			if (h.second == 1 || h.second<0)
				return false;
		}
		return true;
	}
};
int main()
{
	return 0;
}
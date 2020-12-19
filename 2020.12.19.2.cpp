#include<iostream>
using namespace std;
#include<unordered_map>
class Solution {
public:
	bool canPermutePalindrome(string s) {
		unordered_map<char, int> um;
		for (auto e : s)
		{
			um[e]++;
		}
		int ret = 0;
		for (auto e : um)
		{
			if (e.second % 2 == 1)
				ret++;
		}
		if (ret>1)
			return false;

		return true;
	}
};
int main()
{
	return 0;
}
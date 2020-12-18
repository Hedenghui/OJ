#include<iostream>
using namespace std;
#include<unordered_map>
class Solution {
public:
	bool isUnique(string astr) {
		unordered_map<char, int> um;
		for (auto e : astr)
		{
			um[e]++;
		}
		for (auto v : um)
		{
			if (v.second >= 2)
				return false;
		}
		return true;
	}
};
int main()
{
	return 0;
}
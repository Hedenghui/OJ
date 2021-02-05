#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>
#include<algorithm>
class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<vector<string>> vv;
		unordered_map<string, vector<string>> um;
		for (auto str : strs)
		{
			auto str1 = str;
			sort(str1.begin(), str1.end());
			um[str1].push_back(str);
		}
		for (auto e : um)
		{
			vv.push_back(e.second);
		}
		return vv;
	}
};
int main()
{
	return 0;
}
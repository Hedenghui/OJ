#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
class Solution {
public:
	string minNumber(vector<int>& nums) {
		vector<string> res;
		for (auto e : nums)
		{
			res.push_back(to_string(e));
		}
		string ret = "";
		sort(res.begin(), res.end(), [](const string& s1, const string &s2)
		{
			return s1 + s2<s2 + s1;
		}
		);
		for (auto v : res)
		{
			ret += v;
		}
		return ret;
	}
};
int main()
{
	return 0;
}
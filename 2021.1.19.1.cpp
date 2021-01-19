#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
class Solution {
public:
	vector<vector<int>> pairSums(vector<int>& nums, int target) {
		unordered_map<int, int> um;
		vector<vector<int>> vv;
		for (auto e : nums)
		{
			if (um[target - e]>0)
			{
				um[target - e]--;
				vv.push_back(vector<int>{e, target - e});
			}
			else
			{
				um[e]++;
			}
		}
		return vv;
	}
};
int main()
{
	return 0;
}
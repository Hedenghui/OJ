#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> um;
		for (int i = 0; i<nums.size(); i++)
		{
			auto it = um.find(target - nums[i]);
			if (it != um.end())
			{
				return vector<int>{it->second, i};
			}
			um[nums[i]] = i;
		}
		return vector<int>{};
	}
};
int main()
{
	return 0;
}
#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
class Solution {
public:
	bool isStraight(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		unordered_map<int, int> m;
		for (auto e : nums)
		{
			m[e]++;
		}
		unordered_map<int, int>::iterator it = m.begin();
		while (it != m.end())
		{
			if ((*it).first != 0 && (*it).second >= 2)
				return false;
			it++;
		}
		int i = 0;
		for (; i<nums.size(); i++)
		{
			if (nums[i] != 0)
				break;
		}
		if (nums[nums.size() - 1] - nums[i] <= 4)
			return true;

		return false;

	}
};
//int main()
//{
//	return 0;
//}
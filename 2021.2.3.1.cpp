#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	vector<vector<int>> vv;
	void dps(vector<vector<int>>& vv, vector<int>& nums, vector<int>& result, vector<bool>& nums1)
	{
		if (result.size() == nums.size())
			vv.push_back(result);
		else
		{
			for (int i = 0; i<nums.size(); i++)
			{
				if (nums1[i])
				{
					result.push_back(nums[i]);
					nums1[i] = false;
					dps(vv, nums, result, nums1);
					nums1[i] = true;
					result.pop_back();
				}
			}
		}
	}
	vector<vector<int>> permute(vector<int>& nums) {
		if (nums.empty())
			return vv;
		vector<bool> nums1(nums.size(), true);
		vector<int> result;
		dps(vv, nums, result, nums1);
		return vv;
	}
};

int main()
{
	return 0;
}
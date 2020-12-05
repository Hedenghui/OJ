#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		if (nums.empty())
			return 0;
		vector<int> dp(nums.size());
		dp[0] = nums[0];
		for (int i = 1; i<nums.size(); i++)
		{
			if (dp[i - 1] <= 0)
				dp[i] = nums[i];
			else
				dp[i] = dp[i - 1] + nums[i];
		}
		sort(dp.begin(), dp.end());
		return dp[nums.size() - 1];
	}
};
//int main()
//{
//	return 0;
//}
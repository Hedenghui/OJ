#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int result = INT_MIN;
		int ret = 0;
		for (int i = 0; i<nums.size(); i++)
		{
			ret += nums[i];
			if (ret>result)
			{
				result = ret;
			}
			if (ret<0)
				ret = 0;
		}
		return result;
	}
};
int main()
{
	return 0;
}
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<int> v;
		vector<vector<int>> vv;
		if (nums.empty() || nums.size()<3)
			return vv;

		sort(nums.begin(), nums.end());
		// if(nums[0]>0)
		// return vv;

		for (int i = 0; i<nums.size() - 1; i++)
		{
			if (i>0 && nums[i] == nums[i - 1])
				continue;
			int L = i + 1;
			int R = nums.size() - 1;
			while (L<R)
			{
				if (nums[i] + nums[L] + nums[R] == 0)
				{
					vv.push_back({ nums[i], nums[L], nums[R] });
					while (L < R && nums[L] == nums[L + 1])
						L++;
					while (L < R && nums[R] == nums[R - 1])
						R--;

					L++;
					R--;
				}
				else if (nums[i] + nums[L] + nums[R]>0)
				{
					R--;
				}
				else
				{
					L++;
				}
			}
		}
		return vv;
	}
};
int main()
{
	return 0;
}
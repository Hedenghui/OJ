#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	vector<int> maxSlidingWindow(vector<int>& nums, int k) {
		vector<int> v;
		if (nums.empty())
			return v;
		int i = 0;
		int m = k;
		while (k <= nums.size())
		{
			int a = nums[i];
			while (i <= k - 1)
			{
				if (nums[i]>a)
					a = nums[i];
				else
				{
					i++;
				}
			}
			v.push_back(a);
			k++;
			i = k - m;
		}
		return v;
	}
};
//int main()
//{
//	return 0;
//}
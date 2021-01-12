#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	void wiggleSort(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<int> nums2;
		int i = 0, j = nums.size() - 1;
		for (; i<j; i++, j--)
		{
			nums2.push_back(nums[j]);
			nums2.push_back(nums[i]);
		}
		if (i == j)
			nums2.push_back(nums[i]);
		nums = nums2;
	}
};

int main()
{
	return 0;
}
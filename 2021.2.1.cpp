#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int binarySearch(vector<int>& nums, int target, bool lower) {
		int begin = 0;
		int end = nums.size() - 1;
		int ans = nums.size();
		while (begin <= end)
		{
			int mid = (begin + end) >> 1;
			if (nums[mid]>target || (lower&&nums[mid] >= target))
			{
				end = mid - 1;
				ans = mid;
			}
			else{
				begin = mid + 1;
			}
		}
		return ans;
	}

	vector<int> searchRange(vector<int>& nums, int target) {
		int leftIndex = binarySearch(nums, target, true);
		int rightIndex = binarySearch(nums, target, false) - 1;
		if (leftIndex <= rightIndex)
			return vector<int>{leftIndex, rightIndex};

		return vector<int>{-1, -1};
	}
};
int main()
{
	return 0;
}
#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int search(vector<int>& nums, int target) {
		int size = nums.size();
		int left = 0;
		int right = size - 1;
		while (left <= right)
		{
			int mid = (left + right) >> 1;
			if (nums[mid] == target)
				return mid;

			if (nums[mid] >= nums[0])
			{
				if (nums[left] <= target&&target<nums[mid])
					right = mid - 1;
				else
					left = mid + 1;
			}
			else
			{
				if (nums[mid]<target&&target <= nums[right])
					left = mid + 1;
				else
					right = mid - 1;
			}
		}
		return -1;
	}
};
int main(){
	return 0;
}
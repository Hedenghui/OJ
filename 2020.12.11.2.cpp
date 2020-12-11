#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int size = nums.size();
		vector<int> v;
		int i = 0, j = size - 1;
		while (i<j)
		{
			int s = nums[i] + nums[j];
			if (s>target)
				j--;
			else if (s<target)
				i++;
			else
			{
				v.push_back(nums[i]);
				v.push_back(nums[j]);
				break;
			}
		}
		return v;
	}
};
int main()
{
	return 0;
}
#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	void sortColors(vector<int>& nums) {
		int p0 = 0, p2 = nums.size() - 1;
		int i = 0;
		for (; i<nums.size(); i++)
		{
			while (i <= p2 && nums[i] == 2)
			{
				swap(nums[i], nums[p2]);
				p2--;
			}
			if (nums[i] == 0)
			{
				swap(nums[i], nums[p0]);
				p0++;
			}
		}
	}
};
int main()
{
	return 0;
}
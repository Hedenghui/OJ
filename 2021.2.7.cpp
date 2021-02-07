#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	bool canJump(vector<int>& nums) {
		int max_length = 0;
		for (int i = 0; i<nums.size(); i++)
		{
			if (i <= max_length)
			{
				max_length = max(max_length, i + nums[i]);
				if (max_length >= (nums.size() - 1))
					return true;
			}
		}
		return false;
	}
};
int main()
{
	return 0;
}
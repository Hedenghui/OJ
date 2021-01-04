#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int findMagicIndex(vector<int>& nums) {
		int ret = 0, i = 0;
		for (; i<nums.size(); i++)
		{
			if (i == nums[i])
			{
				ret = i;
				break;
			}
		}
		if (i == nums.size())
			return -1;
		return  ret;
	}
};
int main()
{
	return 0;
}
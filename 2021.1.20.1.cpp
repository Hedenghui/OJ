#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int ans = nums.size();
		for (int i = 0; i<nums.size(); i++)
			ans ^= nums[i] ^ i;
		return ans;
	}
};
int main()
{
	return 0;
}
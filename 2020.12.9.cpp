#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int size = nums.size() + 1;
		int num = 0;
		int res = 0;
		for (int i = 0; i<size; i++)
		{
			num += i;
		}
		for (auto e : nums)
		{
			res += e;
		}
		return num - res;
	}
};
int main()
{
	return 0;
}
#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int>> vv;
		vv.push_back({});
		int i = 0;
		while (i<nums.size())
		{
			int size = vv.size();
			for (int j = 0; j<size; j++)
			{
				vector<int> ans(vv[j].begin(), vv[j].end());
				ans.push_back(nums[i]);
				vv.push_back(ans);
			}
			i++;
		}
		return vv;
	}
};
int main()
{
	return 0;
}
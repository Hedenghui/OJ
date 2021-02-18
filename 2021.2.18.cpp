#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	int largestRectangleArea(vector<int>& heights) {
		heights.push_back(0);
		heights.insert(heights.begin(), 0);
		vector<int> v;
		int max_num = 0;
		for (int i = 0; i<heights.size(); i++)
		{
			while (!v.empty() && heights[v.back()]>heights[i])
			{
				int ret = v.back();
				v.pop_back();
				int left = v.back() + 1;
				int right = i - 1;
				max_num = max(max_num, (right - left + 1)*heights[ret]);
			}
			v.push_back(i);
		}
		return max_num;
	}
};
int main()
{
	return 0;
}
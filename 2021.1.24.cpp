#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	int maxArea(vector<int>& height) {
		int left = 0;
		int right = height.size() - 1;
		int result = 0;//最后结果
		while (left<right)
		{
			int ret = (right - left)*min(height[left], height[right]);
			result = max(ret, result);
			if (height[left]<height[right])
				left++;//这就是最大结果
			else
				right--;//这就是最大结果
		}
		return result;
	}
};
int main()
{
	return 0;
}
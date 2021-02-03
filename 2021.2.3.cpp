#include<iostream>
using namespace std;
#include<vector>
//±©Á¦·¨
// class Solution {
// public:
//     int trap(vector<int>& height) {

//         int nums=0;
//         if(height.empty())
//         return nums;
//         for(int i=1;i<height.size()-1;i++)
//         {
//             int max_left=0,max_right=0;
//             for(int j=i;j>=0;j--)
//             {
//                 max_left=max(max_left,height[j]);
//             }
//             for(int j=i;j<height.size();j++)
//             {
//                 max_right=max(max_right,height[j]);
//             }
//             nums+=min(max_right,max_left)-height[i];
//         }
//         return nums;
//     }
// };

//Ë«Ö¸Õë
class Solution {
public:
	int trap(vector<int>& height) {
		int left = 0;
		int ans = 0;
		int right = height.size() - 1;
		int max_left = 0, max_right = 0;
		while (left<right)
		{
			if (height[left]<height[right])
			{
				if (height[left] >= max_left)
					max_left = height[left];
				else
				{
					ans += max_left - height[left];
				}
				left++;
			}
			else{
				if (height[right] >= max_right)
					max_right = height[right];
				else
				{
					ans += max_right - height[right];
				}
				right--;
			}
		}
		return ans;
	}
};
int main()
{
	return 0;
}
#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	int search(vector<int>& nums, int target) {
		if (nums.size() == 0)
			return -1;
		int l = 0, r = nums.size() - 1, mid;
		while (l<r)
		{
			//1.去除开头和结尾相同的元素。例如：5 6 1 2 5 5 5
			while (nums[r] == nums[l] && l<r)
				r--;
			mid = (l + r) / 2;
			if (mid + 1 <= r)
			{
				//2.将跟mid相同的全部放到右边
				int temp = nums[mid + 1];
				for (int i = mid; i >= l; i--)
				{
					if (temp != nums[i])
					{
						mid = i;
						break;
					}
				}
			}
			if (nums[l] <= nums[mid])//左边有序
			{
				if (target >= nums[l] && target <= nums[mid])
					r = mid;
				else l = mid + 1;
			}
			else{
				if (target >= nums[mid + 1] && target <= nums[r])
					l = mid + 1;
				else r = mid;
			}

		}
		if (target == nums[l])
			return l;
		else
			return -1;
	}
};

int main()
{
	return 0;
}
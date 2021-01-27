#include<iostream>
using namespace std;
#include<vector>


class Solution {
public:
	int PartSort(vector<int>& a, int begin, int end)
	{
		int key = a[end];
		int key_end = end;
		while (begin<end)
		{
			while (begin<end&&a[begin] <= key)
				++begin;

			while (begin<end&&a[end] >= key)
				--end;

			swap(a[begin], a[end]);
		}
		swap(a[begin], a[key_end]);
		return begin;

	}
	void QuickSort(vector<int>& a, int begin, int end)
	{
		if (begin >= end)
			return;

		int keyindex = PartSort(a, begin, end);
		QuickSort(a, begin, keyindex - 1);
		QuickSort(a, keyindex + 1, end);
	}
	vector<int> sortArray(vector<int>& nums) {
		QuickSort(nums, 0, nums.size() - 1);
		return nums;
	}
};
int main()
{
	return 0;
}
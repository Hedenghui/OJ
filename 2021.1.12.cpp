#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int binary_search(vector<int>& v, int target)//зЂвт&
	{
		int left = 0;
		int right = v.size() - 1;
		int mid;
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (target == v[mid])
				return mid;
			else if (target>v[mid])
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
		return -1;
	}
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		for (int i = 0; i<matrix.size(); i++)
		{
			if (binary_search(matrix[i], target) != -1)
				return true;
		}
		return false;
	}
};

int main()
{
	return 0;
}
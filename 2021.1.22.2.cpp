#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int> v;
		for (auto e : nums1)
		{
			v.push_back(e);
		}
		for (auto e : nums2)
		{
			v.push_back(e);
		}
		sort(v.begin(), v.end());
		int n = v.size();
		double m;
		if (n % 2 == 0)
		{
			return double((double(v[n / 2]) + double(v[n / 2 - 1])) / 2);
		}
		else
			return double(v[n / 2]);
	}
};
int main()
{
	return 0;
}
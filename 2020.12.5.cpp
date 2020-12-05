#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	vector<int> getLeastNumbers(vector<int>& arr, int k) {
		vector<int> v;
		sort(arr.begin(), arr.end());
		for (int i = 1; i <= k; i++)
		{
			v.push_back(arr[i - 1]);
		}
		return v;
	}
};
//int main()
//{
//	return 0;
//}
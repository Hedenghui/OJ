#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	int smallestDifference(vector<int>& a, vector<int>& b) {
		// 1 2 3 11 20
		// 8 19 23 127 235
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		long num = INT_MAX;
		for (int i = 0, j = 0; i<a.size() && j<b.size();)
		{
			num = min(num, abs(long(a[i]) - long(b[j])));
			if (a[i]<b[j])
				i++;
			else
				j++;
		}
		return num;
	}
};
int main()
{
	return 0;
}
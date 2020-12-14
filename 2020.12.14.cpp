#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	int maxProfit(vector<int>& prices) {

		int max1 = INT_MAX;
		int sum = 0;
		for (auto e : prices)
		{
			max1 = min(e, max1);
			sum = max(sum, (e - max1));
		}
		return sum;
	}
};
//int main()
//{
//	return 0;
//}
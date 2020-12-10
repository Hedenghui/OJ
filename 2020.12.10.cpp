#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	vector<int> singleNumbers(vector<int>& nums) {
		vector<int> v;
		int a = 0;
		for (auto e : nums)
		{
			a ^= e;
		}
		int b = 1;
		while ((a&b) == 0)
		{
			b <<= 1;
		}
		int c = 0;
		int d = 0;
		for (auto n : nums)
		{
			if (b&n)
				c ^= n;
			else
				d ^= n;
		}
		v.push_back(c);
		v.push_back(d);
		return v;
	}
};
//int main()
//{
//	return 0;
//}

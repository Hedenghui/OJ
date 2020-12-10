#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		// int a=0;
		// map<int,int> m;
		// for(auto e:nums)
		// {
		//     m[e]++;
		// }
		// for(auto e:m)
		// {
		//     if(e.second==1)
		//     a=e.first;
		// }
		// return a;

		int a = 0;
		for (int i = 0; i<32; i++)
		{
			int res = 0;
			for (auto e : nums)
			{
				if (e&(1 << i))
					res++;
			}
			if (res % 3 == 1)
				a ^= (1 << i);
		}
		return a;
	}
};
//int main()
//{
//	return 0;
//}
#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	vector<int> printNumbers(int n) {
		//9 99 999 9999 99999
		int res = 1;
		while (n)
		{
			res *= 10;
			n--;
		}
		vector<int> v;
		for (int i = 1; i<res; i++)
		{
			v.push_back(i);
		}
		return v;
	}
};
//int main()
//{
//	return 0;
//}
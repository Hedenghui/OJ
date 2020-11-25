#include<iostream>
using namespace std;

class Solution {
public:
	int numWays(int n) {
		int a = 1;
		int b = 1;
		int num;
		for (int i = 0; i<n; i++)
		{
			num = (a + b) % 1000000007;
			a = b;
			b = num;
		}
		return a;
	}
};

//int main()
//{
//	return 0;
//}
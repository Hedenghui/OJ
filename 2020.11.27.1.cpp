#include<iostream>
using namespace std;

class Solution {
public:
	int cuttingRope(int n) {
		if (n <= 3)
			return n - 1;

		int res = 1;
		while (n>4)
		{
			n = n - 3;
			res = res * 3;
		}
		return res*n;
	}
};
int main()
{
	return 0;
}
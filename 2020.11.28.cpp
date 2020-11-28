#include<iostream>
using namespace std;

class Solution {
public:
	double myPow(double x, int n) {
		long num = n;
		if (num == 0 || x == 1)
			return 1;

		if (num<0)
		{
			x = 1 / x;
			num = -num;
		}
		double res = 1.0;
		while (num)
		{
			if (num & 1)
				res *= x;

			x *= x;
			num >>= 1;
		}
		return res;
	}
};
int main()
{
	return 0;
}
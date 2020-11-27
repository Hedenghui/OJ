#include<iostream>
using namespace std;

class Solution {
public:
	int cuttingRope(int n) {
		long res = 1;
		if (n <= 3)
			return n - 1;

		while (n>4)
		{
			n = n - 3;
			res = ((res * 3) % 1000000007);
		}
		return (res*n) % 1000000007;
	}
};

int main()
{
	return 0;
}
#include<iostream>
using namespace std;

class Solution {
public:
	int exchangeBits(int num) {
		int right = (num&(0x55555555)) << 1;
		int left = (num&(0xaaaaaaaa)) >> 1;
		return left | right;
	}
};
int main()
{
	return 0;
}
#include<iostream>
using namespace std;
#include<cstdint>

class Solution {
public:
	int hammingWeight(uint32_t n) {
		int res = 0;
		int h = 0;
		while (h<32)
		{
			if ((n&(1 << h)))
			{
				res++;
			}
			h++;
		}
		// while(n)
		// {
		//     if(n & 1)    res++;
		//     n >>= 1;
		// }
		return res;
	}
};

int main()
{
	return 0;
}
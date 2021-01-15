#include<iostream>
using namespace std;
class Solution {
public:
	// int maximum(int a, int b) {
	//     while(a>b)
	//     {
	//         int k=1;
	//         return a*k+b*0; 
	//     }
	//     while(a<=b)
	//     {
	//         int k=1;
	//         return a*0+b*k;
	//     }
	//     return 1;
	// }
	int maximum(int a, int b)
	{
		long key = (((long)a - (long)b) >> 63) & 1;
		return b*key + a*(key ^ 1);
	}
};
int main()
{
	return 0;
}
#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	// int climbStairs(int n) {
	//     long a=1;
	//     long b=1;
	//     long num;
	//     for(int i=0;i<n;i++)
	//     {
	//         num=a+b;
	//         a=b;
	//         b=num;
	//     }
	//     return a;
	// }
	// num a b
	//    2  1 2
	//    3  2 3
	//    5  3 5
	int climbStairs(int n) {
		if (n <= 1) return n;
		vector<int> v(n + 1);
		v[1] = 1; v[2] = 2;
		for (int i = 3; i <= n; i++)
		{
			v[i] = v[i - 1] + v[i - 2];
		}
		return v[n];
	}
};
int main()
{
	return 0;
}
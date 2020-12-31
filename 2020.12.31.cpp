#include<iostream>
using namespace std;

class Solution {
public:
	int insertBits(int N, int M, int i, int j) {
		for (int h = i; h <= j; h++)
		{
			if (N&(1 << h))//表示N这位为1
			{
				N -= (1 << h);//变成0
			}
		}
		N += (M << i);
		return N;

	}
};
//int main()
//{
//	return 0;
//}
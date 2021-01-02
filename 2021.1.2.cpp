#include<iostream>
using namespace std;

class Solution {
public:
	int convertInteger(int A, int B) {
		A ^= B;
		int num = 0;
		for (int i = 0; i<32; i++){
			if (A&(1 << i))
				num++;
		}
		return num;
	}
};
//int main()
//{
//	return 0;
//}
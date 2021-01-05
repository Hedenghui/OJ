#include<iostream>
using namespace std;
class Solution {
public:
	int multiply(int A, int B) {
		if (B == 0)
			return 0;

		return A + multiply(A, B - 1);
	}
};
int main()
{
	return 0;
}
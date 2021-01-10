#include<iostream>
using namespace std;
#include<vector>
class Solution
{
public:
	void merge(vector<int>& A, int m, vector<int>& B, int n) {
		int std = A.size() - 1;
		int retA = m - 1;
		int retB = n - 1;
		while (retA>-1 && retB>-1)
		{
			if (A[retA]>B[retB])
			{
				A[std] = A[retA];
				std--;
				retA--;
			}
			else
			{
				A[std] = B[retB];
				std--;
				retB--;
			}
		}
		while (retB >= 0)
		{
			A[std] = B[retB];
			std--;
			retB--;
		}
	}
};
//int main()
//{
//	return 0;
//}
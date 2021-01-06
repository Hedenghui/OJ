#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	void hanotafun(int n, vector<int>& A, vector<int>& B, vector<int>& C)
	{
		if (n == 1)
		{
			C.push_back(A.back());
			A.pop_back();
		}
		else
		{
			hanotafun(n - 1, A, C, B);
			hanotafun(1, A, B, C);
			hanotafun(n - 1, B, A, C);
		}
	}
	void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
		int n = A.size();
		hanotafun(n, A, B, C);
	}
};
//int main()
//{
//	return 0;
//}
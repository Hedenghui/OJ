#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	int movingCount(int m, int n, int k) {
		vector<vector <int>> vv(m, vector<int>(n, 0));
		vv[0][0] = 1;
		int sum = 1;
		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j<n; j++)
			{
				if ((i == 0 && j == 0) || (function(i) + function(j))>k)
					continue;
				if (j - 1 >= 0)
					vv[i][j] |= vv[i][j - 1];
				if (i - 1 >= 0)
					vv[i][j] |= vv[i - 1][j];
				sum += vv[i][j];
			}
		}
		return sum;
	}
	int function(int h)
	{
		int num = 0;
		while (h / 10)
		{
			num += (h % 10);
			h = h / 10;
		}
		num += h;
		return num;
	}

};
int main()
{
	return 0;
}

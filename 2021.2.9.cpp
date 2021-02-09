#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int uniquePaths(int m, int n) {
		vector<vector<int>> vv(m, vector<int>(n));
		for (int i = 0; i<vv.size(); i++)
		{
			vv[i][0] = 1;
		}
		for (int j = 0; j<vv[0].size(); j++)
		{
			vv[0][j] = 1;
		}
		for (int i = 1; i<vv.size(); i++)
		{
			for (int j = 1; j<vv[0].size(); j++)
			{
				vv[i][j] = vv[i - 1][j] + vv[i][j - 1];
			}
		}
		return vv[m - 1][n - 1];
	}
};
int main()
{
	return 0;
}
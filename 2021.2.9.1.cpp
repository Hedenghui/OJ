#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {
		vector<vector<int>> vv(grid.size(), vector<int>(grid[0].size()));
		vv[0][0] = grid[0][0];
		for (int i = 1; i<grid.size(); i++)
		{
			vv[i][0] = grid[i][0] + vv[i - 1][0];
		}
		for (int i = 1; i<grid[0].size(); i++)
		{
			vv[0][i] = grid[0][i] + vv[0][i - 1];
		}
		for (int i = 1; i<vv.size(); i++)
		{
			for (int j = 1; j<vv[0].size(); j++)
			{
				vv[i][j] = (min(vv[i - 1][j], vv[i][j - 1]) + grid[i][j]);
			}
		}
		int L = vv.size();
		int R = vv[0].size();
		return vv[L - 1][R - 1];
	}
};
int main()
{
	return 0;
}
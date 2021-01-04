#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	vector<vector<int>> pathWithObstacles(vector<vector<int>>& obstacleGrid) {
		int row = obstacleGrid.size() - 1;
		int col = obstacleGrid[0].size() - 1;
		vector<vector<int>> vv;
		dps(obstacleGrid, vv, row, col);
		return vv;
	}
	bool dps(vector<vector<int>>& obstacleGrid, vector<vector<int>>& vv, int row, int col)
	{
		if (row<0 || col<0 || obstacleGrid[row][col] == 1)
			return false;
		else if (row == 0 && col == 0)
		{
			vv.push_back({ 0, 0 });
			return true;
		}
		bool dpsrow = dps(obstacleGrid, vv, row - 1, col);
		if (dpsrow)
		{
			vv.push_back(vector<int>{row, col});
			return true;
		}
		bool dpscol = dps(obstacleGrid, vv, row, col - 1);
		if (dpscol)
		{
			vv.push_back(vector<int>{row, col});
			return true;
		}
		return false;
	}
};
int main()
{
	return 0;
}
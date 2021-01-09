#include<iostream>
using namespace std;
#include<vector>
#include<string>
class Solution {
public:
	vector<vector<string>> result;//记录最后的结果
	void back(int n, int row, vector<string> vv)//回溯
	{
		if (row == n)
		{
			result.push_back(vv);
			return;
		}
		else
		{
			for (int col = 0; col<n; col++)
			{
				if (TrueofCondition(row, col, n, vv))
				{
					vv[row][col] = 'Q';
					back(n, row + 1, vv);
					vv[row][col] = '.';
				}
			}
		}
	}
	bool TrueofCondition(int row, int col, int n, vector<string> vv)//判断该位置能不能放置皇后
	{
		//1.竖直方向不能放
		for (int i = 0; i<row; i++)
		{
			if (vv[i][col] == 'Q')
				return false;
		}
		//2.该结点的 北偏东 方向(对角线) 不能放Q
		for (int x = row - 1, y = col + 1; x >= 0 && y<n; x--, y++)
		{
			if (vv[x][y] == 'Q')
				return false;
		}
		//3.该结点的 北偏西 方向(对角线) 不能放Q
		for (int x = row - 1, y = col - 1; x >= 0 && y >= 0; x--, y--)
		{
			if (vv[x][y] == 'Q')
				return false;
		}
		return true;
	}
	vector<vector<string>> solveNQueens(int n) {
		vector<string> vv(n, string(n, '.'));
		int row = 0;
		back(n, row, vv);
		return result;
	}
};
//int main()
//{
//	return 0;
//}
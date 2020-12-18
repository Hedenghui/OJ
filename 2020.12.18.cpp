#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	vector<vector<int>> re(vector<vector<int>>& matrix)
	{
		if (matrix.empty())
			return matrix;
		vector<vector<int>> hh;
		int n = matrix[0].size();
		int k = matrix.size();
		hh.resize(n);
		for (int i = 0; i<n; i++)
		{
			hh[i].resize(k);
		}

		int g = 0, y;
		for (int i = n - 1; i >= 0; i--)
		{
			y = 0;
			for (int j = 0; j<k; j++)
			{
				hh[g][y] = matrix[j][i];
				y++;
			}
			g++;

		}
		return hh;
	}
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		vector<int> v;
		while (!matrix.empty())
		{
			for (auto e : matrix[0])
				v.push_back(e);
			matrix.erase(matrix.begin());
			matrix = re(matrix);
		}
		return v;
	}
};

int main()
{
	return 0;
}
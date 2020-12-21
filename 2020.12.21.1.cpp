#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	void setZeroes(vector<vector<int>>& matrix) {
		if (matrix.size() == 0)
			return;
		int hang = matrix.size();
		int lie = matrix[0].size();

		vector<bool> v1(hang, false);
		vector<bool> v2(lie, false);
		for (int i = 0; i<hang; i++)
		{
			for (int j = 0; j<lie; j++)
			{
				if (matrix[i][j] == 0)
				{
					v1[i] = true;
					v2[j] = true;
				}
			}
		}

		for (int i = 0; i<hang; i++)
		{
			for (int j = 0; j<lie; j++)
			{
				if (v1[i] || v2[j])
					matrix[i][j] = 0;
			}
		}
	}
};
int main()
{
	return 0;
}
#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		if (matrix.size() == 0)
			return;
		int size = matrix.size();
		for (int i = 0, j = size - 1; i<j; i++, j--)
		{
			for (int h = 0; h<matrix[0].size(); h++)
			{
				swap(matrix[i][h], matrix[j][h]);
			}
		}
		for (int end = size - 1; end >= 0; end--)
		{
			for (int begin = 0; begin<end; begin++)
			{
				swap(matrix[end][begin], matrix[begin][end]);
			}
		}
	}
};
int main()
{
	return 0;
}